section "d01_ma_003"{
    Background_Bg_GS2("BG_SC220_?_1", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("", 7, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "｛主人公｝.");
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(7, "M7_01F", 0);
    Message_Who(0);
    Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝!");
    Voice_PlayVoice("NS_07_000_01900", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "Thank you for the other day.\nHow was Komori-kun?");
    Message_Who(0);
    Message_MsgDisp("主人公", "It's okay, his complexion still\nlooked bad...");
    Character_ChFace(0, 0, 10);
    Character_BlinkStart(7, 2, (#1));
    Voice_PlayVoice("NS_07_000_02000", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "Complexion...\nSo that means you saw him?");
    Message_Who(0);
    Message_MsgDisp("主人公", "Um, just a little bit.");
    Character_ChFace(0, 0, 0);
    Character_BlinkStart(7, 0, (#1));
    Voice_PlayVoice("NS_07_000_02100", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "I actually haven't seen him again,\nsince that day.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Is that so...?");
    Voice_PlayVoice("NS_07_000_02200", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "It's unfortunate that I am a\nteacher.\nI must be cautious.\nBut I won't give up.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Yeah!");
    Voice_PlayVoice("", 7, "NS_07_000_02300");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "｛主人公｝, will you\noccasionally go talk to him on your\nway to and from school?");
    Message_MsgSel("Okay, I will.", "Eh? That's a little...");
    switch (Message_TextSelect()){
        case 0:
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay, I will do it as often as I\ncan.");
        Character_ChFace(0, 0, 6);
        Character_ChFace(0, 4, 0);
        Voice_PlayVoice("NS_07_000_02400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Thank you.\nI'm glad I can count on you.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I'm curious.\nAlright, from now on, I should\noccasionally wake up early and drop\nby his place!)");
        System_GlobalWork(18, 0, 3);
        break ;
        case 1:
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh!? That's a little...");
        Character_ChFace(0, 0, 0);
        Character_BlinkStart(7, 3, (#1));
        Voice_PlayVoice("NS_07_000_02500", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I see... Okay. Thank you.");
        Character_Chara_GS2(7, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Perhaps that was a little cold...)");
        break ;
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
