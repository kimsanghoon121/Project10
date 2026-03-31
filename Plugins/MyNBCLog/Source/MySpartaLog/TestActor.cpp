#include "TestActor.h"

ATestActor::ATestActor()
{
    PrimaryActorTick.bCanEverTick = false;
}

void ATestActor::BeginPlay()
{
    Super::BeginPlay();
    UE_LOG(LogTemp, Warning, TEXT("[MySpartaLog] TestActor가 성공적으로 스폰되었습니다!"));
}