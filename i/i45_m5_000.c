section "i45_m5_000"{
    if (Parameter_GetCh1Param(5, 130) <= 2){
        Background_Bg_GS2("BG_AR400_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(5, "M5_??F", 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("I4505000_E00000", 5, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Huh, ｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝. Welcome.");
        Character_ChFace(0, 2, 3);
        Character_BlinkStart(5, 2, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("I4505000_E00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "So you're working here～.\nIt's quite a nice store.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Haha, right.");
        Voice_PlayVoice("I4505000_E00200", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Yeah.\nI'll take a look around while I'm\nhere.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Take your time～.");
        }
    else if (Parameter_GetCh1Param(5, 130) == 3){
        Background_Bg_GS2("BG_AR400_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(5, "M5_??F", 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 5, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.\nAre you out shopping today?");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("I4505000_E00300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Yeah...\nMy mom asked me to get some things\nfor her, but I don't know what most\nof them are.");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("I4505000_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "So is it okay if you helped me out?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay, sure. Leave it to me!");
        }
    else {
        Background_Bg_GS2("BG_AR400_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "Welcome. Ah, ｛Chris＊＊｝.");
        Character_ChFace(0, 0, 9);
        Character_ChFace(0, 4, 1);
        Character_Chara_GS2(5, "M5_??F", 0);
        Voice_PlayVoice("I4505000_E00500", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "... Foul play.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh? What is?");
        Character_BlinkStart(5, 2, (#1));
        Voice_PlayVoice("I4505000_E00600", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "...\nEven though I've got nothing to do\nhere, I wanted to come here.");
        Character_BlinkStart(5, 3, (#1));
        Voice_PlayVoice("I4505000_E00700", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "But I'll probably end up looking at\nthings again...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Uhh...\nAre you out shopping today,\n｛Chris＊＊｝?");
        Character_ChFace(0, 0, 10);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("I4505000_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "...\nUsing that smile really is no fair.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Even if he says that it's \"no\nfair\"...\nWhat should I do～?)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(5, 86, 1);
    }
