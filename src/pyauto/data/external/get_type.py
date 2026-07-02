import re

def get_cpp_type(value):
    """Return CPP Type Function"""
    # 양끝 공백 제거
    clean_val = value.strip()
    val_lower = clean_val.lower()

    # 1. Boolean 체크
    if val_lower in ['true', 'false']:
        return 'bool'

    # 2. [추가] 숫자만 들어간 문자열인지 체크 (쉼표, 공백, 부호 제외하고 숫자만 남겼을 때 데이터가 있는지)
    # 예: "15, 1, 50" -> "15150" -> 숫자만 존재하므로 True
    # 단, 완전히 비어있는 문자열은 제외하기 위해 숫자가 최소 1개 이상 있어야 함
    only_digits = re.sub(r'[\s,+-]', '', clean_val)
    if only_digits.isdigit():
        # 쉼표로 구분된 여러 숫자 중 '첫 번째 숫자' 기준으로 C++ 데이터 타입 범위를 체크하고 싶다면 split 사용
        # 만약 "15, 1, 50" 전체를 하나로 묶어 int로 판단하려면 첫 번째 숫자만 파싱합니다.
        first_num_str = re.split(r'[\s,]+', clean_val)[0]
        try:
            num = int(first_num_str)
            if -2147483648 <= num <= 2147483647:
                return 'int'
            else:
                return 'double' # 혹은 long long
        except ValueError:
            return 'int' # 예외 발생 시 기본 int 처리

    # 3. 기존 소수점/부동소수점(float, double) 체크 로직
    # split()[0]을 처리하여 첫 단어만 추출
    first_word = clean_val.split()[0]
    if re.match(r'^[-+]?\d*\.\d+$', first_word) or re.match(r'^[-+]?\d+(\.\d+)?[eE][-+]?\d+$', first_word):
        if first_word.lower().endswith('f'):
            return 'float'
        if '.' in first_word:
            decimal_part = first_word.split('.')[1]
            if len(decimal_part) > 6:
                return 'double'
        return 'float'

    # 4. 그 외에는 문자열 처리
    return 'std::string'