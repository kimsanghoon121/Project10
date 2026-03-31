ModuleAndPlugin/
├── ModuleAndPlugin.uproject      # 프로젝트 설정 파일 (모듈 및 플러그인 활성화 명시)
├── Source/
│   ├── ModuleAndPlugin/          # 주 게임 모듈 (Primary Game Module)
│   │   ├── ModuleAndPlugin.Build.cs
│   │   └── ...
│   └── MySpartaLog/              # 일차적으로 만들었던 모듈
├── Plugins/
│   └── MyNBCLog/                 # 커스텀 플러그인
│       ├── MyNBCLog.uplugin      # 플러그인 명세 파일
│       ├── Content/              # 플러그인 에셋 폴더
│       └── Source/
│           └── MySpartaLog/      # 일차적으로 만들었던 모듈을 플러그인으로 이동
│               ├── MySpartaLog.Build.cs
│               ├── MySpartaLog.h/cpp
│               └── TestActor.h/cpp # 테스트용 로그 출력 액터
