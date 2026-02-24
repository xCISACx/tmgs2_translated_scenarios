section "b03_m4_200"{
    if (Date_ChkDateOpen(15) == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
        Character_ChFace(1, 2, 2);
        Background_Bg_GS2("BG_WF530_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0304200_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Wow, it's crowded... Let's go...");
        Character_ChFace(1, 2, 2);
        Character_BlinkStart(4, 3, (#1), 2);
        Character_ChFace(1, 3, 4);
        Message_PauseSkinship();
        Voice_PlayVoice("B0304200_D00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "For now, I'll go change...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay, I'll see you afterward.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M4", 201);
        }
    else if (Date_ChkDateOpen(16) == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 1, 35);
        Character_ChFace(1, 0, 9);
        Background_Bg_GS2("BG_WF540_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0304200_D00200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... It's cold. Let's go soon...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M4", 202);
        }
    }
