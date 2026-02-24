section "b03_m2_090"{
    Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
    Background_Bg_GS2("BG_FP400_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Date_ChkDateOpen(25) == 1){
        Voice_PlayVoice("B0302090_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... Let's go.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M2", 91);
        }
    else if (Date_ChkDateOpen(26) == 1){
        Voice_PlayVoice("B0302090_B00100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Let's go.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M2", 92);
        }
    else if (Date_ChkDateOpen(27) == 1){
        Voice_PlayVoice("B0302090_B00200", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Dinosaurs...\nEhh, let's go check it out.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M2", 93);
        }
    else if (Date_ChkDateOpen(28) == 1){
        Voice_PlayVoice("B0302090_B00300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... I haven't heard of it.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M2", 94);
        }
    else if (Date_ChkDateOpen(29) == 1){
        Voice_PlayVoice("B0302090_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... That's a name I've heard before.\nLet's go check it out.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M2", 95);
        }
    }
