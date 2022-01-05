bool mVisualDamage = false;

float (*get_HeadShotDamageDecreaseScale)(void *damage);
float _get_HeadShotDamageDecreaseScale(void *damage){
    if (mVisualDamage) {
        return -9999999999999999; // <== Value
    }
    return get_HeadShotDamageDecreaseScale(damage);
}

HOOK(0x1F359F8, _get_HeadShotDamageDecreaseScale, get_HeadShotDamageDecreaseScale);

//--- Offset name in dump

// RVA: 0x1F359F8 Offset: 0x1F359F8 VA: 0x5F359F8
// public float get_HeadShotDamageDecreaseScale() { }