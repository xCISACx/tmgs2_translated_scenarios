section "w08_m2_000"{
    if ((System_GlobalWork(0, 1) == 68) || (System_GlobalWork(1, 1) == 68) || (System_GlobalWork(2, 1) == 68)){
        Character_Chara_GS2(2, "M2_??F", 0);
        Voice_PlayVoice("W0802000_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... Are you getting on?");
        Parameter_AddCh1Param(2, 61, 2);
        Parameter_AddCh1Param(2, 60, 1);
        Parameter_AddCh1Param(2, 62, #2);
        }
    else if ((System_GlobalWork(0, 1) == 69) || (System_GlobalWork(1, 1) == 69) || (System_GlobalWork(2, 1) == 69)){
        Character_ChFace(0, 0, 9);
        Character_Chara_GS2(2, "M2_??F", 0);
        Voice_PlayVoice("W0802000_B00100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... It's high. Looks shaky.");
        Parameter_AddCh1Param(2, 61, #1);
        Parameter_AddCh1Param(2, 60, #3);
        Parameter_AddCh1Param(2, 62, 2);
        SoundEffect_PlayStream(3, "SS_T_00_231_M00");
        }
    else if ((System_GlobalWork(0, 1) == 73) || (System_GlobalWork(1, 1) == 73) || (System_GlobalWork(2, 1) == 73)){
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(2, "M2_??F", 0);
        Voice_PlayVoice("W0802000_B00200", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... I'll do it.");
        Parameter_AddCh1Param(2, 61, 3);
        Parameter_AddCh1Param(2, 60, 2);
        Parameter_AddCh1Param(2, 62, #3);
        }
    else if ((System_GlobalWork(0, 1) == 71) || (System_GlobalWork(1, 1) == 71) || (System_GlobalWork(2, 1) == 71)){
        Character_Chara_GS2(2, "M2_??F", 0);
        Voice_PlayVoice("W0802000_B00300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Are things like this okay with you?");
        Parameter_AddCh1Param(2, 61, 1);
        Parameter_AddCh1Param(2, 60, 0);
        Parameter_AddCh1Param(2, 62, #1);
        }
    else if ((System_GlobalWork(0, 1) == 70) || (System_GlobalWork(1, 1) == 70) || (System_GlobalWork(2, 1) == 70)){
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 1);
        Character_ChFace(0, 4, 1);
        Character_Chara_GS2(2, "M2_??F", 0);
        Voice_PlayVoice("W0802000_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... You go on ahead.");
        Parameter_AddCh1Param(2, 61, 0);
        Parameter_AddCh1Param(2, 60, #1);
        Parameter_AddCh1Param(2, 62, 1);
        }
    Character_Chara_GS2(2, "NON");
    }
