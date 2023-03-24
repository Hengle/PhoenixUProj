#include "RenderSettingsEmissiveAdapatationVolumeBase.h"

void ARenderSettingsEmissiveAdapatationVolumeBase::SetPriority(float NewPriority) {
}

ARenderSettingsEmissiveAdapatationVolumeBase::ARenderSettingsEmissiveAdapatationVolumeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Priority = 0.00f;
    this->BlendRadius = 100.00f;
    this->BlendWeight = 1.00f;
    this->bUnbounded = false;
    this->bEnabled = true;
}

