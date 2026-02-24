section "w08_m3_000"{
    if ((System_GlobalWork(0, 1) == 68) || (System_GlobalWork(1, 1) == 68) || (System_GlobalWork(2, 1) == 68)){
        Character_ChFace(0, 2, 1);
        Character_BlinkStart(3, 3, (#1), 1);
        Character_ChFace(0, 3, 2);
        Character_Chara_GS2(3, "M3_??F", 0);
        Voice_PlayVoice("W0803000_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... We will ride in a moment.\nI need to prepare myself for the\nworst.");
        Parameter_AddCh1Param(3, 61, 0);
        Parameter_AddCh1Param(3, 60, #1);
        Parameter_AddCh1Param(3, 62, 1);
        }
    else if ((System_GlobalWork(0, 1) == 69) || (System_GlobalWork(1, 1) == 69) || (System_GlobalWork(2, 1) == 69)){
        Character_Chara_GS2(3, "M3_??F", 0);
        Voice_PlayVoice("W0803000_C00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I look forward to viewing the\nscenery from the top.\nNow, let's go.");
        Parameter_AddCh1Param(3, 61, 2);
        Parameter_AddCh1Param(3, 60, 1);
        Parameter_AddCh1Param(3, 62, #2);
        SoundEffect_PlayStream(3, "SS_T_00_231_M00");
        }
    else if ((System_GlobalWork(0, 1) == 73) || (System_GlobalWork(1, 1) == 73) || (System_GlobalWork(2, 1) == 73)){
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(3, "M3_??F", 0);
        Voice_PlayVoice("W0803000_C00200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I am itching to put my arms to use.\nWatching it gives me peace of mind.");
        Parameter_AddCh1Param(3, 61, 3);
        Parameter_AddCh1Param(3, 60, 2);
        Parameter_AddCh1Param(3, 62, #3);
        }
    else if ((System_GlobalWork(0, 1) == 71) || (System_GlobalWork(1, 1) == 71) || (System_GlobalWork(2, 1) == 71)){
        Character_BlinkStart(3, 2, (#1), 1);
        Character_Chara_GS2(3, "M3_??F", 0);
        Voice_PlayVoice("W0803000_C00300", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Now, how much longer is this thing\ngoing to take...\nI want to see what they've got.");
        Parameter_AddCh1Param(3, 61, 1);
        Parameter_AddCh1Param(3, 60, 0);
        Parameter_AddCh1Param(3, 62, #1);
        }
    else if ((System_GlobalWork(0, 1) == 70) || (System_GlobalWork(1, 1) == 70) || (System_GlobalWork(2, 1) == 70)){
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(3, 3, (#1), 1);
        Character_ChFace(0, 3, 0);
        Character_Chara_GS2(3, "M3_??F", 0);
        Voice_PlayVoice("W0803000_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... You are a high school student.\nWhy would you want to ride this? ...\nWell, it's fine. I will go with you.");
        Parameter_AddCh1Param(3, 61, 0);
        Parameter_AddCh1Param(3, 60, #1);
        Parameter_AddCh1Param(3, 62, 1);
        }
    Character_Chara_GS2(3, "NON");
    }
