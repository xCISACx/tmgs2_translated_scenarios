section "q17_m2_000"{
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(2, "M2_01F", 0);
    Background_Bg_GS2("BG_SCB20_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (System_GlobalWork(0, 1) == 1){
        if (System_GlobalWork(23, 1) == 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "That was fun～!");
            Voice_PlayVoice("FD_02_060_00000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nAren't you a little too energetic?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("FD_02_060_00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "You looked gloomy on the way back.\nIt's nice that you had fun.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Shiba＊＊｝...)");
            }
        else if (Parameter_GetCh1Param(2, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "I had fun.\nThank you, ｛Shiba＊＊｝.");
            Voice_PlayVoice("Q0802000_B00000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah.");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("Q0802000_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nAre you free the day after tomorrow,\nby chance?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, yes. Especially now...");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("Q0802000_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Then we should go around, again.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah! With pleasure!");
            Character_BlinkStart(2, 2, (#1));
            Voice_PlayVoice("Q0802000_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Then we'll meet here, again.");
            }
        else if (Parameter_GetCh1Param(2, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "Thanks for today,\n｛Shiba＊＊｝.");
            Voice_PlayVoice("Q0802000_B00400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nI should be the one thanking you.\nSorry for inviting you on short\nnotice.");
            Message_Who(0);
            Message_MsgDisp("主人公", "No, I'm happy we went to visit\nplaces together.");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("", 2, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... ｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes?");
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("Q0802000_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "What are your plans for the next\nfree day?");
            Message_Who(0);
            Message_MsgDisp("主人公", "There are a lot of places I want to\ngo to, so I haven't made a concrete\ndecision, yet.");
            Character_BlinkStart(2, 3, (#1));
            Voice_PlayVoice("Q0802000_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I see.... Then we'll go out, again.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh? Really?");
            Character_BlinkStart(2, 0, (#1));
            Voice_PlayVoice("Q0802000_B00800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah. If it's okay with you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "If that's what you wish.");
            Character_BlinkStart(2, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("Q0802000_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Be here in the morning.\nI'll come for you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay!");
            }
        }
    else if (System_GlobalWork(0, 1) == 2){
        if (Parameter_GetCh1Param(2, 130) <= 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you for today,\n｛Shiba＊＊｝.");
            Voice_PlayVoice("Q0802000_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Yeah.");
            Message_Who(0);
            Message_MsgDisp("主人公", "What should we do the day after\ntomorrow?");
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(2, 2, (#1));
            Voice_PlayVoice("Q0802000_B01100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "You haven't decided on anything?");
            Message_Who(0);
            Message_MsgDisp("主人公", "As a matter of fact, yes.\nWell, ｛Shiba＊＊｝?");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("Q0802000_B01200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... The same as you.\nWe can go somewhere you'd like to\ngo.\nAgain.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay! Let's go together!");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("Q0802000_B01300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nThen here, the day after tomorrow.");
            }
        else if (Parameter_GetCh1Param(2, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you for today,\n｛Shiba＊＊｝!");
            Voice_PlayVoice("Q0802000_B01400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Surprisingly, I enjoyed myself.\nMy plan was to visit places alone.\nThanks.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Is that so?");
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(2, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("Q0802000_B01500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah.\nWhat are you doing the day after\ntomorrow?");
            Message_Who(0);
            Message_MsgDisp("主人公", "I haven't thought about it, yet...");
            Character_ChFace(0, 2, 1);
            Voice_PlayVoice("Q0802000_B01600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Then think about it.\nWe can visit places together.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay!\nThen the day after tomorrow, again!");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("Q0802000_B01700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "We'll meet here.");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "The day went by in an instant.\nI really had fun～!");
            Voice_PlayVoice("Q0802000_B01800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah.\nI had more fun since I was with you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 4, 0);
            Voice_PlayVoice("Q0802000_B01900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... The day after tomorrow.\nSpend the time with me.");
            Message_Who(0);
            Message_MsgDisp("主人公", "The day after tomorrow...\nThe next free day?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("Q0802000_B02000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah....\nThanks for inviting me today.");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(2, 2, (#1));
            Voice_PlayVoice("Q0802000_B02100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I don't know whether this can pass\nfor a token of gratitude or not,\nthough.");
            Message_Who(0);
            Message_MsgDisp("主人公", "No, I'm glad. I look forward to it!");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(2, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("Q0802000_B02200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Thanks.\nThen wait here the day after\ntomorrow.\nWait for me to come pick you up.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay!");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
