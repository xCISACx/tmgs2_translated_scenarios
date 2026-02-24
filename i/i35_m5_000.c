section "i35_m5_000"{
    Background_Bg_GS2("BG_AR300_?_0", 1, #1, 0);
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(5, "M5_??F", 0);
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(5, 130) <= 2){
        Voice_PlayVoice("I3505000_E00000", 5, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Huh, ｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Welcome...\nAh, ｛Chris＊＊｝.");
        Voice_PlayVoice("I3505000_E00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Hello. So you're working here.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah. What are you ordering?");
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("I3505000_E00200", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Uhh, five cakes that girls will\nprobably like.\nSomething you recommend▼");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay!");
        }
    else if (Parameter_GetCh1Param(5, 130) == 3){
        Voice_PlayVoice("I3505000_E00300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Hello.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝. Welcome!");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 1);
        Voice_PlayVoice("I3505000_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "... I've got a favor to ask.");
        Message_Who(0);
        Message_MsgDisp("主人公", "W-What's up?");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("I3505000_E00500", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Turn around once▼");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ehh? Why?");
        Voice_PlayVoice("I3505000_E00600", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "I wanna see.\nIt'd be cute if your skirt was also\nflying～.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ehhh!");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 1);
        Voice_PlayVoice("I3505000_E00700", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Is that no good?");
        Message_Who(0);
        Message_MsgDisp("主人公", "... Hmm... I will if you buy a cake.");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("I3505000_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "You're good at selling stuff.\nI'll buy a cake, then.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Haha, thanks for your patronage,\nagain▼");
        }
    else {
        Voice_PlayVoice("I3505000_E00900", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Hello.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.\nWhat's up?");
        Character_ChFace(0, 2, 3);
        Character_BlinkStart(5, 3, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("I3505000_E01000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "I came here to treat my body and\nheart.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ehh?");
        Voice_PlayVoice("I3505000_E01100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "With cake, and with you.\nIt's real economical.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(R-Really...)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(5, 86, 1);
    }
