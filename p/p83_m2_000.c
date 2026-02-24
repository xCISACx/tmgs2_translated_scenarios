section "p83_m2_000"{
    Background_Bg_GS2("BG_SCA80_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetPl1Param(322) == 0){
        if (Parameter_GetCh1Param(2, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh～* We're busier than usual\nduring the Culture Festival.)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_01F", 0);
            Music_PlayBGM(0, "MN_C_02_000_D03", 127, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Shiba＊＊｝.\nWhat's up?");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("P7302000_B00000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I was told to come and get the\ncopies.\nWhere are they?");
            Message_Who(0);
            Message_MsgDisp("主人公", "I'll go get them.\nHow many copies should I get?");
            Voice_PlayVoice("P7302000_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "100 copies.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Roger!");
            }
        else if (Parameter_GetCh1Param(2, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "I was told to get the copies.\nWhere is it?");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_01F", 0);
            Music_PlayBGM(0, "MN_C_02_000_D03", 127, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Shiba＊＊｝.\nWhat's up?");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("P7302000_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I was told to come and get the\ncopies.\nWhere are they?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, well, I'll go get them.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(2, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P7302000_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... It's okay, I'll do it myself.\nYou must be tired, right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "I'm alright!\nI'm still filled with energy even\nthough it's busy.\nHow many copies should I get?");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P7302000_B00400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "100 copies.... Sorry.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Roger!");
            }
        }
    else if (Parameter_GetPl1Param(322) == 1){
        if (Parameter_GetCh1Param(2, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "I've collected the drills!\nThe additional pamphlets will arrive\nfrom the print shop in one hour～!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Phew*...\nI guess one person isn't enough?)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_01F", 0);
            Music_PlayBGM(0, "MN_C_02_000_D03", 127, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Shiba＊＊｝.\nDid something happen?");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(2, 2, (#1));
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("P7302000_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Lost and found.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you! Is that the lost item?");
            Voice_PlayVoice("P7302000_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "A bunny.");
            Message_Who(0);
            Message_MsgDisp("主人公", "A bunny... Is it a live one?");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("P7302000_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Obviously.");
            Message_Who(0);
            Message_MsgDisp("主人公", "R-Right...\nWe'll look after it for the time\nbeing.");
            Voice_PlayVoice("P7302000_B00800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah, take care of him.");
            }
        else if (Parameter_GetCh1Param(2, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "I've collected the drills!\nThe additional pamphlets will arrive\nfrom the print shop in one hour～!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Phew*...\nI guess one person isn't enough?)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_01F", 0);
            Music_PlayBGM(0, "MN_C_02_000_D03", 127, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Shiba＊＊｝.\nDid something happen?");
            Voice_PlayVoice("P7302000_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Lost and found.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you! Is that the lost item?");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("P7302000_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Bunnies.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Bunnies...!?");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("P7302000_B01100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Exactly...\nThey were following behind me.\nA white and a black one, 2 of\nthem....\nI was in a hurry...");
            Message_Who(0);
            Message_MsgDisp("主人公", "R-Right...\nWe'll look after them for the time\nbeing.");
            Voice_PlayVoice("P7302000_B01200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah, I'm depending on you.");
            }
        }
    else {
        if (Parameter_GetCh1Param(2, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Be thorough in the hygiene\ninspection of food-related places.\nAlso, watch out for signs sticking\nout in the corridors.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Phew～* I was asked to be in charge\nof the floor, so I've got a lot of\nthings to do...)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_01F", 0);
            Music_PlayBGM(0, "MN_C_02_000_D03", 127, 40);
            Voice_PlayVoice("", 2, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Shiba＊＊｝.\nWhat's up?");
            Character_ChFace(0, 0, 11);
            Character_BlinkStart(2, 2, (#1));
            Voice_PlayVoice("P7302000_B01300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "The basketball and drama clubs are\ncausing trouble in the gym.");
            Message_Who(0);
            Message_MsgDisp("主人公", "What!? Why!?");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("P7302000_B01400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Like I'd know.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh...\nI'll check it out in just a minute!");
            }
        else if (Parameter_GetCh1Param(2, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "Be thorough in the hygiene\ninspection of food-related places.\nAlso, watch out for signs sticking\nout in the corridors.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Phew～* I was asked to be in charge\nof the floor, so I've got a lot of\nthings to do...)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_01F", 0);
            Music_PlayBGM(0, "MN_C_02_000_D03", 127, 40);
            Voice_PlayVoice("", 2, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Shiba＊＊｝.\nWhat's wrong?");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(2, 2, (#1));
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("P7302000_B01500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "The basketball and drama clubs are\ncausing trouble in the gym.");
            Message_Who(0);
            Message_MsgDisp("主人公", "What-!? Why!?");
            Voice_PlayVoice("P7302000_B01600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I heard it on my way here, so I\ndon't know the details.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see...\nOh, were you running an errand,\n｛Shiba＊＊｝?");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("P7302000_B01700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... You... Nevermind..\nAre you going to go to the gym or\nnot?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, right!\nHave to go check on it for a bit!");
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    System_Call_GS2("P84", "M2", 0);
    }
