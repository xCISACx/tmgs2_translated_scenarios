section "b03_m6_040"{
    if (Parameter_GetCh1Param(6, 130) <= 2){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
        Background_Bg_GS2("BG_WF400_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0306040_F00000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "It's almost opening time.\nShall we go?");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Character_Chara_GS2(6, "NON");
        Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
        Character_ChFace(1, 2, 4);
        Character_BlinkStart(6, 2, (#1), 2);
        Character_ChFace(1, 3, 0);
        Background_Bg_GS2("BG_WF401_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_ResumeSkinship();
        Voice_PlayVoice("B0306040_F00100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Oh, we're here!\nI'm glad we got good seats.");
        SoundEffect_PlayStream(3, "SS_T_00_041_M00");
        }
    else {
        Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_WF400_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0306040_F00200", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "It's almost opening time. Come on!");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Character_Chara_GS2(6, "NON");
        Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
        Character_ChFace(1, 0, 10);
        Character_BlinkStart(6, 2, (#1), 2);
        Background_Bg_GS2("BG_WF401_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_ResumeSkinship();
        Voice_PlayVoice("B0306040_F00300", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Oh, we're here.\nWe got pretty good seats. Lucky!");
        SoundEffect_PlayStream(3, "SS_T_00_041_M00");
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (Date_ChkDateOpen(7) == 1){
        System_Call_GS2("B04", "M6", 41);
        }
    else if (Date_ChkDateOpen(8) == 1){
        System_Call_GS2("B04", "M6", 42);
        }
    else if (Date_ChkDateOpen(9) == 1){
        System_Call_GS2("B04", "M6", 43);
        }
    else if (Date_ChkDateOpen(10) == 1){
        System_Call_GS2("B04", "M6", 44);
        }
    else if (Date_ChkDateOpen(11) == 1){
        System_Call_GS2("B04", "M6", 45);
        }
    else if (Date_ChkDateOpen(12) == 1){
        System_Call_GS2("B04", "M6", 46);
        }
    }
