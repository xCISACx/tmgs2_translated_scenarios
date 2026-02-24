section "i65_m3_000"{
    if (Parameter_GetCh1Param(3, 130) <= 2){
        Background_Bg_GS2("BG_AR600_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(3, "M3_??F", 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 3, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝.\nWhat's up?");
        Character_BlinkStart(3, 3, (#1));
        Voice_PlayVoice("I6503000_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I was just passing by.\nI saw you, so all I did was call out\nto you.\nThat is all. Excuse me.");
        }
    else if (Parameter_GetCh1Param(3, 130) == 3){
        Background_Bg_GS2("BG_AR600_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "... Thank you very much!!");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(3, "M3_??F", 0);
        Voice_PlayVoice("", 3, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝. Welcome!");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("I6503000_C00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "You greet people loudly.\nThat is good. Keep working hard.\nExcuse me.");
        }
    else {
        Background_Bg_GS2("BG_AR600_?_0", 1, #1, 0);
        Character_BlinkStart(3, 2, (#1));
        Character_Chara_GS2(3, "M3_??F", 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 3, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝.\nWhat's up?");
        Voice_PlayVoice("I6503000_C00200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... N-Nothing.\nI heard on the news that the price\nof crude oil has changed\ndramatically, so...");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("I6503000_C00300", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I was wondering what the prices of\noil was at the nearby stations....\nWhich is why I came.");
        Message_Who(0);
        Message_MsgDisp("主人公", "... Amazing, ｛Hikami＊＊｝.\nYou're so enthusiastic about\nstudying!");
        Character_BlinkStart(3, 0, (#1));
        Voice_PlayVoice("I6503000_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "T-Thank you...\nBy the way, are you here on this day\nof the week, every week?");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("I6503000_C00500", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I mean, if I research the prices on\nthe same day, I can see the price\nfluctuation.\nAnd we might see each other. Hahaha!");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(3, 86, 1);
    }
