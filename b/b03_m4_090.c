section "b03_m4_090"{
    if (Date_ChkDateOpen(25) == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
        Character_ChFace(1, 0, 10);
        Background_Bg_GS2("BG_FP400_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0304090_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I want to see that sword and armor.\nWell, let's go.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M4", 91);
        }
    else if (Date_ChkDateOpen(26) == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
        Character_ChFace(1, 3, 2);
        Background_Bg_GS2("BG_FP400_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0304090_D00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Hmm... Well, let's go.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M4", 92);
        }
    else if (Date_ChkDateOpen(27) == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
        Character_ChFace(1, 2, 4);
        Character_BlinkStart(4, 2, (#1), 2);
        Character_ChFace(1, 3, 3);
        Character_ChFace(1, 4, 1);
        Background_Bg_GS2("BG_FP400_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0304090_D00200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Good, a dinosaur!\nI want to see a Pteranodon.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M4", 93);
        }
    else if (Date_ChkDateOpen(28) == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
        Character_ChFace(1, 2, 3);
        Character_ChFace(1, 3, 4);
        Background_Bg_GS2("BG_FP400_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0304090_D00300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Gagi?... Well, okay. Let's go.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M4", 94);
        }
    else if (Date_ChkDateOpen(29) == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
        Background_Bg_GS2("BG_FP400_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0304090_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Who's this? Let's go for now.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M4", 95);
        }
    }
