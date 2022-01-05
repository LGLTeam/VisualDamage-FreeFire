bool mVisualDamage = false;

float (*GetSkillDamageScale)(void *kill);
float _GetSkillDamageScale(void *kill){
    if (mVisualDamage) {
        return 19.0f; // <== Value
    }
    return GetSkillDamageScale(kill);
}

HOOK(0x1F36634, _GetSkillDamageScale, GetSkillDamageScale);

//--- Offset name in dump
// RVA: 0x1F36634 Offset: 0x1F36634 VA: 0x5F36634
// public float GetSkillDamageScale(OOIPMACFIFL JFPKMOEGDIF, OPILIBBOEAC IDDMAHJHGBC) { }
