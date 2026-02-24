section "b03_m6_140"{
    if (Parameter_GetCh1Param(6, 130) <= 2){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
        Background_Bg_GS2("BG_NE200_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0306140_F00000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "It's almost time. Shall we enter?");
        }
    else {
        Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
        Character_ChFace(1, 0, 10);
        Background_Bg_GS2("BG_NE200_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0306140_F00100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Oh, it's almost time.\nLet's go inside!");
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Character_Chara_GS2(6, "NON");
    Message_ResumeSkinship();
    if (Parameter_GetCh1Param(6, 130) <= 2){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0306140_F00200", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Oh, it seems like it's about to\nstart.");
        }
    else {
        Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0306140_F00300", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Look, look!\nIt seems like it's about to start!");
        }
    SoundEffect_PlayStream(3, "SS_T_00_041_M00");
    System_Wait(60);
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (Date_ChkDateOpen(36) == 1){
        System_Call_GS2("B04", "M6", 141);
        }
    else if (Date_ChkDateOpen(37) == 1){
        System_Call_GS2("B04", "M6", 142);
        }
    else if (Date_ChkDateOpen(38) == 1){
        System_Call_GS2("B04", "M6", 143);
        }
    else if (Date_ChkDateOpen(39) == 1){
        System_Call_GS2("B04", "M6", 144);
        }
    else if (Date_ChkDateOpen(40) == 1){
        System_Call_GS2("B04", "M6", 145);
        }
    else if (Date_ChkDateOpen(41) == 1){
        System_Call_GS2("B04", "M6", 146);
        }
    else if (Date_ChkDateOpen(42) == 1){
        System_Call_GS2("B04", "M6", 147);
        }
    }
