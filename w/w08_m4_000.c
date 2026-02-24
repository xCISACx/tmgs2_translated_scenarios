section "w08_m4_000"{
    if ((System_GlobalWork(0, 1) == 68) || (System_GlobalWork(1, 1) == 68) || (System_GlobalWork(2, 1) == 68)){
        Character_Chara_GS2(4, "M4_??F", 0);
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("W0804000_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "It's the main part of today!\nHey, let's go quickly!");
        Parameter_AddCh1Param(4, 61, 3);
        Parameter_AddCh1Param(4, 60, 2);
        Parameter_AddCh1Param(4, 62, #3);
        }
    else if ((System_GlobalWork(0, 1) == 69) || (System_GlobalWork(1, 1) == 69) || (System_GlobalWork(2, 1) == 69)){
        Character_Chara_GS2(4, "M4_??F", 0);
        Voice_PlayVoice("W0804000_D00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Viewing the scenery from the top is\nnice!");
        Parameter_AddCh1Param(4, 61, 1);
        Parameter_AddCh1Param(4, 60, 0);
        Parameter_AddCh1Param(4, 62, #1);
        SoundEffect_PlayStream(3, "SS_T_00_231_M00");
        }
    else if ((System_GlobalWork(0, 1) == 73) || (System_GlobalWork(1, 1) == 73) || (System_GlobalWork(2, 1) == 73)){
        Character_Chara_GS2(4, "M4_??F", 0);
        Voice_PlayVoice("W0804000_D00200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... My palms are getting sweaty.\nBut this is a good feeling of\nnervousness...!");
        Parameter_AddCh1Param(4, 61, 2);
        Parameter_AddCh1Param(4, 60, 1);
        Parameter_AddCh1Param(4, 62, #2);
        }
    else if ((System_GlobalWork(0, 1) == 71) || (System_GlobalWork(1, 1) == 71) || (System_GlobalWork(2, 1) == 71)){
        Character_Chara_GS2(4, "M4_??F", 0);
        Voice_PlayVoice("W0804000_D00300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... By the way, are you scared?\nI think you should tell me before we\ngo inside.");
        Parameter_AddCh1Param(4, 61, #1);
        Parameter_AddCh1Param(4, 60, #3);
        Parameter_AddCh1Param(4, 62, 2);
        }
    else if ((System_GlobalWork(0, 1) == 70) || (System_GlobalWork(1, 1) == 70) || (System_GlobalWork(2, 1) == 70)){
        Character_Chara_GS2(4, "M4_??F", 0);
        Character_BlinkStart(4, 3, (#1));
        Voice_PlayVoice("W0804000_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Ah...\nYou seriously gotta be mistaken...");
        Parameter_AddCh1Param(4, 61, 0);
        Parameter_AddCh1Param(4, 60, #1);
        Parameter_AddCh1Param(4, 62, 1);
        }
    Character_Chara_GS2(4, "NON");
    }
