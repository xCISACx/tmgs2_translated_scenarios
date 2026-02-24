section "w08_m1_000"{
    if ((System_GlobalWork(0, 1) == 68) || (System_GlobalWork(1, 1) == 68) || (System_GlobalWork(2, 1) == 68)){
        Character_ChFace(0, 2, 4);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(1, "M1_??F", 0);
        Voice_PlayVoice("W0801000_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Oh, the roller coaster!\nYou know, I'll go ahead first--");
        Message_Who(0);
        Message_MsgDisp("主人公", "People are watching.");
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 3);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("W0801000_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Eh... Well, will you get on?");
        Parameter_AddCh1Param(1, 61, 3);
        Parameter_AddCh1Param(1, 60, 2);
        Parameter_AddCh1Param(1, 62, #3);
        }
    else if ((System_GlobalWork(0, 1) == 69) || (System_GlobalWork(1, 1) == 69) || (System_GlobalWork(2, 1) == 69)){
        Character_BlinkStart(1, 2, (#1), 1);
        Character_ChFace(0, 3, 3);
        Character_ChFace(0, 4, 1);
        Character_Chara_GS2(1, "M1_??F", 0);
        Voice_PlayVoice("W0801000_A00200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "It looks snug, but I guess it has a\nnice view, right?");
        Parameter_AddCh1Param(1, 61, 2);
        Parameter_AddCh1Param(1, 60, 1);
        Parameter_AddCh1Param(1, 62, #2);
        SoundEffect_PlayStream(3, "SS_T_00_231_M00");
        }
    else if ((System_GlobalWork(0, 1) == 73) || (System_GlobalWork(1, 1) == 73) || (System_GlobalWork(2, 1) == 73)){
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(1, 2, (#1), 1);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(1, "M1_??F", 0);
        Voice_PlayVoice("W0801000_A00300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Ooo, amazing!\nMy theory on velocity is--");
        Message_Who(0);
        Message_MsgDisp("主人公", "People are watching.");
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 3);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("W0801000_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "... So we have to drive safely?");
        Parameter_AddCh1Param(1, 61, 2);
        Parameter_AddCh1Param(1, 60, 1);
        Parameter_AddCh1Param(1, 62, #2);
        }
    else if ((System_GlobalWork(0, 1) == 71) || (System_GlobalWork(1, 1) == 71) || (System_GlobalWork(2, 1) == 71)){
        Character_ChFace(0, 2, 5);
        Character_BlinkStart(1, 2, (#1), 1);
        Character_ChFace(0, 3, 2);
        Character_Chara_GS2(1, "M1_??F", 0);
        Voice_PlayVoice("W0801000_A00500", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Good... I'm with you.\nYou know that, right? You go first.");
        Parameter_AddCh1Param(1, 61, #1);
        Parameter_AddCh1Param(1, 60, #3);
        Parameter_AddCh1Param(1, 62, 2);
        }
    else if ((System_GlobalWork(0, 1) == 70) || (System_GlobalWork(1, 1) == 70) || (System_GlobalWork(2, 1) == 70)){
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 4);
        Character_Chara_GS2(1, "M1_??F", 0);
        Voice_PlayVoice("W0801000_A00600", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "You're kidding...\nWhy would anyone your age--");
        Message_Who(0);
        Message_MsgDisp("主人公", "People are watching.");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("W0801000_A00700", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Haha... Ahaha!\nWell, are we going to get on?");
        Parameter_AddCh1Param(1, 61, #1);
        Parameter_AddCh1Param(1, 60, #3);
        Parameter_AddCh1Param(1, 62, 2);
        }
    Character_Chara_GS2(1, "NON");
    }
