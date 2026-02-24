section "b03_m6_180"{
    Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
    Background_Bg_GS2("BG_NE600_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(6, 130) <= 2){
        Voice_PlayVoice("B0306180_F00000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Oh, it seems like it's about to\nbegin!\nShall we enter?");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Character_Chara_GS2(6, "NON");
        Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
        Character_BlinkStart(6, 3, (#1), 2);
        Background_Bg_GS2("BG_NE700_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0306180_F00100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "I'm glad we got good seats!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah!");
        }
    else {
        Voice_PlayVoice("B0306180_F00200", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Look, we're early! It's starting!");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Character_Chara_GS2(6, "NON");
        Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
        Character_ChFace(1, 2, 4);
        Character_BlinkStart(6, 2, (#1), 2);
        Character_ChFace(1, 3, 3);
        Background_Bg_GS2("BG_NE700_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0306180_F00300", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "We're lucky we reserved good seats!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah!");
        }
    SoundEffect_PlayStream(3, "SS_T_00_041_M00");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (Date_ChkDateOpen(49) == 1){
        System_Call_GS2("B04", "M6", 181);
        }
    else if (Date_ChkDateOpen(50) == 1){
        System_Call_GS2("B04", "M6", 181);
        }
    else if (Date_ChkDateOpen(51) == 1){
        System_Call_GS2("B04", "M6", 181);
        }
    else if (Date_ChkDateOpen(52) == 1){
        System_Call_GS2("B04", "M6", 182);
        }
    else if (Date_ChkDateOpen(53) == 1){
        System_Call_GS2("B04", "M6", 183);
        }
    else if (Date_ChkDateOpen(54) == 1){
        System_Call_GS2("B04", "M6", 184);
        }
    else if (Date_ChkDateOpen(55) == 1){
        System_Call_GS2("B04", "M6", 185);
        }
    else if (Date_ChkDateOpen(56) == 1){
        System_Call_GS2("B04", "M6", 185);
        }
    else if (Date_ChkDateOpen(57) == 1){
        System_Call_GS2("B04", "M6", 186);
        }
    else if (Date_ChkDateOpen(58) == 1){
        System_Call_GS2("B04", "M6", 187);
        }
    else if (Date_ChkDateOpen(59) == 1){
        System_Call_GS2("B04", "M6", 188);
        }
    else if (Date_ChkDateOpen(60) == 1){
        System_Call_GS2("B04", "M6", 189);
        }
    }
