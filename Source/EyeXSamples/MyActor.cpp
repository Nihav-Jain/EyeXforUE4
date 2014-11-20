#include "EyeXSamples.h"
#include "MyActor.h"


AMyActor::AMyActor(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{

}

void AMyActor::GotGazeFocus()
{
	UE_LOG(LogTemp, Warning, TEXT("Someone is looking at me!"));
}

void AMyActor::LostGazeFocus()
{
}
