section "b03_m5_090"{
    if (Date_ChkDateOpen(25) == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
        Background_Bg_GS2("BG_FP400_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0305090_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "I wonder what kind of exhibit is\nshowing.\nLet's go in.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M5", 91);
        }
    else if (Date_ChkDateOpen(26) == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
        Character_ChFace(1, 3, 3);
        Background_Bg_GS2("BG_FP400_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0305090_E00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Glasswork, huh?\nIt seems like I can learn about\ndesign.\nLet's go.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M5", 92);
        }
    else if (Date_ChkDateOpen(27) == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
        Character_ChFace(1, 2, 5);
        Character_ChFace(1, 3, 3);
        Background_Bg_GS2("BG_FP400_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0305090_E00200", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Fossils...\nI wonder if there are massive ones.\nLet's go.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M5", 93);
        }
    else if (Date_ChkDateOpen(28) == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
        Character_ChFace(1, 0, 10);
        Character_BlinkStart(5, 3, (#1), 2);
        Background_Bg_GS2("BG_FP400_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0305090_E00300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Wah, I'm really interested!\nLet's go!");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M5", 94);
        }
    else if (Date_ChkDateOpen(29) == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
        Background_Bg_GS2("BG_FP400_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0305090_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Eh, a person born in Habataki City.\nI'm curious. Let's go.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M5", 95);
        }
    }
