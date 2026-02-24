section "i55_m3_000"{
    if (Parameter_GetCh1Param(3, 130) <= 2){
        Background_Bg_GS2("BG_AR500_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(3, "M3_??F", 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 3, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝.\nWhat's up?");
        Character_BlinkStart(3, 3, (#1));
        Voice_PlayVoice("I5503000_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I saw someone who looked like you,\nbut it actually was you.\nI just wanted to call out your name.\nExcuse me.");
        }
    else if (Parameter_GetCh1Param(3, 130) == 3){
        Background_Bg_GS2("BG_AR500_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(3, "M3_??F", 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 3, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝. Welcome.");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("I5503000_C00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "While we engage in a lengthy\nconversation, please get me a cactus\nthat has beautiful flowers.\nIt is for my place.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(...\nWas ｛Hikami＊＊｝ trying to\ntalk to me?)");
        }
    else {
        Background_Bg_GS2("BG_AR500_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(3, "M3_??F", 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 3, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝. Welcome!");
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("I5503000_C00200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I would like for you to make me a\nsplendid bouquet that will cost me 5\nRich.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Amazing!\nYou're really splurging money on\nthis bouquet.");
        Character_BlinkStart(3, 3, (#1));
        Voice_PlayVoice("I5503000_C00300", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Yes.\nI am going to visit a cousin that I\nrespect.\nAre there perhaps any message cards?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes, we have them.\nWhat should I write?");
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("I5503000_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Please write: \"To 0・1・2・3, whom I\nlove and respect, Itaru\".");
        Message_Who(0);
        Message_MsgDisp("主人公", "... What are those numbers?\nIs it some kind of password?");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("I5503000_C00500", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "It will be fine sending that message\nto him.\nThank you.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I wonder what kind of cousin he\nis...)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(3, 86, 1);
    }
