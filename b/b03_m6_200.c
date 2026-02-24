section "b03_m6_200"{
    if (Date_ChkDateOpen(15) == 1){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Background_Bg_GS2("BG_WF530_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0306200_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "As expected, it's crowded.\nLet's arrange to meet back here\nafter we change our clothes.");
            }
        else {
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_ChFace(1, 3, 3);
            Background_Bg_GS2("BG_WF530_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0306200_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Wow, the sea!\nLet's meet back here after we change\nour clothes!");
            }
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        if (Parameter_ChkSpEvent("B05", "M6", 1) == 0){
            System_Call_GS2("B04", "M6", 201);
            }
        else {
            System_Call_GS2("B05", "M6", 1);
            }
        }
    else if (Date_ChkDateOpen(16) == 1){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
            Background_Bg_GS2("BG_WF540_WI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("B0306200_F00200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It's cold...");
            }
        else {
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(6, 3, (#1), 2);
            Character_ChFace(1, 3, 5);
            Background_Bg_GS2("BG_WF540_WI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("B0306200_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It's cold!\nThe sea in Winter must be cold.");
            }
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M6", 202);
        }
    }
