section "w08_m5_000"{
    if ((System_GlobalWork(0, 1) == 68) || (System_GlobalWork(1, 1) == 68) || (System_GlobalWork(2, 1) == 68)){
        Character_Chara_GS2(5, "M5_??F", 0);
        Character_BlinkStart(5, 3, (#1));
        Voice_PlayVoice("W0805000_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Hey, is it okay if I just stay put\nhere...?\nMaybe I can't do that...\n*Sigh*");
        Parameter_AddCh1Param(5, 61, 0);
        Parameter_AddCh1Param(5, 60, #1);
        Parameter_AddCh1Param(5, 62, 1);
        }
    else if ((System_GlobalWork(0, 1) == 69) || (System_GlobalWork(1, 1) == 69) || (System_GlobalWork(2, 1) == 69)){
        Character_Chara_GS2(5, "M5_??F", 0);
        Voice_PlayVoice("W0805000_E00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "The Ferris Wheel is slow, but nice.\nLet's enjoy the lovely scenery.");
        Parameter_AddCh1Param(5, 61, 2);
        Parameter_AddCh1Param(5, 60, 1);
        Parameter_AddCh1Param(5, 62, #2);
        SoundEffect_PlayStream(3, "SS_T_00_231_M00");
        }
    else if ((System_GlobalWork(0, 1) == 73) || (System_GlobalWork(1, 1) == 73) || (System_GlobalWork(2, 1) == 73)){
        Character_Chara_GS2(5, "M5_??F", 0);
        Voice_PlayVoice("W0805000_E00200", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Let's try not to bump into each\nother, okay?\n... I wish to drive safely.");
        Parameter_AddCh1Param(5, 61, 1);
        Parameter_AddCh1Param(5, 60, 0);
        Parameter_AddCh1Param(5, 62, #1);
        }
    else if ((System_GlobalWork(0, 1) == 71) || (System_GlobalWork(1, 1) == 71) || (System_GlobalWork(2, 1) == 71)){
        Character_Chara_GS2(5, "M5_??F", 0);
        Voice_PlayVoice("W0805000_E00300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "You can always come close to me if\nyou're terrified.\nC'mon, let's go▼");
        Parameter_AddCh1Param(5, 61, 2);
        Parameter_AddCh1Param(5, 60, 1);
        Parameter_AddCh1Param(5, 62, #2);
        }
    else if ((System_GlobalWork(0, 1) == 70) || (System_GlobalWork(1, 1) == 70) || (System_GlobalWork(2, 1) == 70)){
        Character_Chara_GS2(5, "M5_??F", 0);
        Voice_PlayVoice("W0805000_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "This is nice.\nEnjoying the view and riding is\npeaceful～.\nC'mon, let's go and ride▼");
        Parameter_AddCh1Param(5, 61, 2);
        Parameter_AddCh1Param(5, 60, 1);
        Parameter_AddCh1Param(5, 62, #2);
        }
    Character_Chara_GS2(5, "NON");
    }
