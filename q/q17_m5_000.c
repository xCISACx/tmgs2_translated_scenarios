section "q17_m5_000"{
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(5, "M5_01F", 0);
    Background_Bg_GS2("BG_SCB20_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (System_GlobalWork(0, 1) == 1){
        if (System_GlobalWork(23, 1) == 5){
            Message_Who(0);
            Message_MsgDisp("主人公", "Thanks for today,\n｛Chris＊＊｝.\nIt was fun.");
            Character_ChFace(0, 0, 0);
            Voice_PlayVoice("FD_05_060_00000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You're welcome. I had fun, too.\nThanks.");
            Character_BlinkStart(5, 2, (#1));
            Voice_PlayVoice("FD_05_060_00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "...\nWill it become a good memory for\nyou?");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Yeah!");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(5, 3, (#1));
            Voice_PlayVoice("FD_05_060_00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Thank gosh. Now then, let's go.");
            }
        else if (Parameter_GetCh1Param(5, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "It was fun!\nBut we couldn't see the apprentice\ngeishas.");
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("Q0805000_E00000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah, that was unfortunate...");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("Q0805000_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "That means I can use that as an\nexcuse for the day after tomorrow.");
            Voice_PlayVoice("Q0805000_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "So, should we go and see the\napprentice geishas on the day after\ntomorrow?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Haha. Okay, let's go.");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("Q0805000_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yay. Let's meet here, again.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay.");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "That was fun!\nThanks for asking me to go along\nwith you.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("Q0805000_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Same here.\nThanks for coming along with me.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(5, 2, (#1));
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("Q0805000_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... Hey.\nDo you have plans for the day after\ntomorrow?");
            Message_Who(0);
            Message_MsgDisp("主人公", "No, I haven't even thought about it.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("Q0805000_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "For real? Then...\nwanna come along with me?");
            Voice_PlayVoice("Q0805000_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Only if... you're fine with it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Sure, okay....\nAre you tired,\n｛Chris＊＊｝?");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(5, 2, (#1));
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("Q0805000_E00800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ah, sorry.\nI was just so happy that you said\nyes...");
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(5, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("Q0805000_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Then I'll see you here again on the\nday after tomorrow.\nTreat me well.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Chris＊＊｝ didn't appear\nto be energetic...\nMaybe it was just my imagination...)");
            }
        }
    else if (System_GlobalWork(0, 1) == 2){
        if (Parameter_GetCh1Param(5, 130) <= 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "Thanks for today,\n｛Chris＊＊｝.");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("Q0805000_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Same here. It was fun.");
            Message_Who(0);
            Message_MsgDisp("主人公", "You're welcome.");
            Voice_PlayVoice("Q0805000_E01100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Have you already decided what to do\non the day after tomorrow?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Nope, nothing.");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("Q0805000_E01200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Then should we go together again?\nI haven't decided on anything,\neither.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Then I'll accept your offer.");
            Voice_PlayVoice("Q0805000_E01300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I'll see you here, again.\nTreat me well.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay.");
            }
        else if (Parameter_GetCh1Param(5, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "That was fun!");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("Q0805000_E01400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Thanks for asking me.\nIt was a lot of fun!");
            Voice_PlayVoice("Q0805000_E01500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Kyoto surely has a lot of other fun\nplaces...\nYou seem like you know of a few more\nplaces.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(5, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("Q0805000_E01600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Meaning I want you to show me around\non the day after tomorrow, too▼");
            Message_Who(0);
            Message_MsgDisp("主人公", "Then should we go together, again?\nBut I don't know if I can show you\naround.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("Q0805000_E01700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "That's fine. We'll meet here, again.\nDon't sleep in.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay!");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "Times flies by when you're having\nfun.");
            Voice_PlayVoice("Q0805000_E01800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah. There wasn't enough time.");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("Q0805000_E01900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "......\nSo I wanna have you all to myself\nagain on the day after tomorrow.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Voice_PlayVoice("Q0805000_E02000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Are you free then?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, yeah.\nThen should we go around together,\nagain?");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(5, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("Q0805000_E02100", 5, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... Yeah.\nThanks, ｛主人公｝.");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
