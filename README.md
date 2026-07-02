# Korean Language

llama.cpp랑 build는 용량이 너무 커서 알아서 해야함

하는법 Vulkan기준(그전에 Vulkan SDK는 설치 해야함)
1. llama.cpp를 git clone한다
2 .cd llama.cpp를 하고 mkdir build를 한다
3. cd build를 한다
4. cmake .. -DGGML_VULKAN=ON를 한다
5. cmake --build build --config Release를 한다
6. 테스트로 일단 int main hello world부터 하나만 실행한다
7. 
