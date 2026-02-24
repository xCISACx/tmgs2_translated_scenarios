section "h8g_m7_000"{
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(7, "M7_17F", 0);
    Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("", 7, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "｛主人公｝.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝!\nWhat is the matter?");
    Voice_PlayVoice("H7G07000_G00000", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "The fact that a student like you\ncame from my class is something very\nunexpected.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Eh? Umm, you mean...?");
    Character_ChFace(0, 0, 10);
    Voice_PlayVoice("H7G07000_G00100", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "...\nThe fact that your work in the\nStudent Council was recognized and\nyou were named the exemplary\nstudent.\nIt is a rare event.");
    Voice_PlayVoice("H7G07000_G00200", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "It's certain that it was no thanks\nto me.\nYou've worked quite hard.");
    Message_Who(0);
    Message_MsgDisp("主人公", "(I'm really glad that I stayed in\nthe Student Council!)");
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(7, 86, 1);
    }
