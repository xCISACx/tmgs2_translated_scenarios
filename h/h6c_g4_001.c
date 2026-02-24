section "h6c_g4_001"{
    Background_Bg_GS2("BG_SC710_SU_1", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "It's my turn to make food today.\nWhat should I make?");
    Message_MsgSel("Microwave curry.", "｛主人公姓名｝'s special curry.", "Pu pat pong curry.");
    switch (Message_TextSelect()){
        case 0:
        Message_Who(0);
        Message_MsgDisp("主人公", "Hmm...\nIt's bothersome, so I'll just make\nmicrowave curry.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        if (Parameter_GetCh1Param(13, 513) != 1){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(13, "G4_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_13_000_D01", 127, 40);
            Voice_PlayVoice("", #1, "H6C13000_M00000");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "｛主人公｝, was it your\nturn to make food today?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, that's right.");
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H6C13000_M00100", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Ah, you've even finished cleaning\nup.\nAs one would expect!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Uhh, all I did was heat up the food,\nthough...");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(13, 2, (#1));
            Voice_PlayVoice("H6C13000_M00200", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Well...");
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(13, "G4_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_13_000_D01", 127, 40);
            Voice_PlayVoice("H6C13000_M00300", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "You've worked hard making food.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Mizushima＊＊｝.");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(13, 2, (#1));
            Character_BlinkStart(13, 0, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("H6C13000_M00400", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Is this perhaps... what I'm eating?");
            Message_Who(0);
            Message_MsgDisp("主人公", "No, everyone is...");
            Character_ChFace(0, 0, 8);
            Character_BlinkStart(13, 3, (#1));
            Message_Who(13);
            Message_MsgDisp("Mizushima", ".........");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        if (Parameter_GetCh1Param(13, 513) != 1){
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H6C13000_M00600", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Thanks for the food!");
            Message_Who(0);
            Message_MsgDisp("主人公", "The food isn't worth thanking me\nfor...");
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("H6C13000_M00700", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Yeah... Ah, no!\nThat's not what I meant!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nI should have made proper food.)");
            }
        else {
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("H6C13000_M00800", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "... Thanks for the food.");
            Message_Who(0);
            Message_MsgDisp("主人公", "The food isn't worth thanking me\nfor.");
            Character_BlinkStart(13, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H6C13000_M00900", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "... It's fine.\nThat's the kind of relationship we\nhave.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nI should have made proper food.)");
            }
        Parameter_AddCh1Param(13, 60, #1);
        break ;
        case 1:
        Message_Who(0);
        Message_MsgDisp("主人公", "Alright, I'll take on homemade\ncurry!\nI'll show everyone my determination!");
        Message_CloseMsg();
        Screen_WipeOut(2);
        if (Parameter_GetCh1Param(13, 513) != 1){
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(13, 3, (#1));
            Character_Chara_GS2(13, "G4_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_13_000_D01", 127, 40);
            Voice_PlayVoice("", #1, "H6C13000_M01000");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "｛主人公｝, it was your\nturn to make food, right?\nI look forward to it～!");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Mizushima＊＊｝.\nI've just about finished making it.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H6C13000_M01100", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "I'll set out the table then, okay?");
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(13, "G4_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_13_000_D01", 127, 40);
            Voice_PlayVoice("H6C13000_M01200", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "You've worked hard.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Mizushima＊＊｝.");
            Character_BlinkStart(13, 2, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("H6C13000_M01300", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "The preparations are falling behind\nschedule, aren't they?\nSorry I couldn't help out...");
            Message_Who(0);
            Message_MsgDisp("主人公", "N-No, it's fine!\nJust sit down and wait for the food!");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        if (Parameter_GetPl1Param(20) >= 60){
            if (Parameter_GetCh1Param(13, 513) != 1){
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(13, 3, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("H6C13000_M01400", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Thanks for the food.\nIt was nice▼");
                Message_Who(0);
                Message_MsgDisp("主人公", "Really?");
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(13, 2, (#1));
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 0);
                Voice_PlayVoice("H6C13000_M01500", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Yeah.\nIt's even better than the curry I've\neaten lately.\nTell me how to make it next time,\nokay?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yay, I was complimented!)");
                }
            else {
                Character_BlinkStart(13, 3, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("H6C13000_M01600", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "... Thanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "The food isn't worth thanking me\nfor.");
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(13, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("H6C13000_M01700", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "That's not true...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ah, she ate it all...\nThank gosh～)");
                }
            Parameter_AddCh1Param(13, 60, 3);
            }
        else {
            if (Parameter_GetCh1Param(13, 513) != 1){
                Character_ChFace(0, 0, 3);
                Character_BlinkStart(13, 3, (#1));
                Voice_PlayVoice("H6C13000_M01800", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Thanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Umm... how was it?");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(13, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H6C13000_M01900", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "H-Hmm?\nWell, everyone has things they are\npicky about when it comes to curry,\nright?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice...)");
                }
            else {
                Character_ChFace(0, 0, 8);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("H6C13000_M02000", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Did you perhaps only make mine like\nthis...?");
                Message_Who(0);
                Message_MsgDisp("主人公", "No, everyone ate the same food...");
                Character_BlinkStart(13, 2, (#1));
                Character_BlinkStart(13, 0, (#1));
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("H6C13000_M02100", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "... Is everyone your rival?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice...)");
                }
            Parameter_AddCh1Param(13, 60, #3);
            }
        break ;
        case 2:
        Message_Who(0);
        Message_MsgDisp("主人公", "Alright!\nI'll take on the Pu pat pong curry!");
        Message_CloseMsg();
        Screen_WipeOut(2);
        if (Parameter_GetCh1Param(13, 513) != 1){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(13, "G4_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_13_000_D01", 127, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Mizushima＊＊｝.");
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("H6C13000_M02200", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Something smells good...\nWow, what an amazing treat!\nWhat is it called?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Uhh, pu pat... Whatever!\nPlease go ahead and eat.");
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(13, "G4_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_13_000_D01", 127, 40);
            Voice_PlayVoice("H6C13000_M02300", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", ".........");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Mizushima＊＊｝.\nI've just finished making food.");
            Character_BlinkStart(13, 2, (#1));
            Character_BlinkStart(13, 0, (#1));
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("H6C13000_M02400", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "You made all of these...?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah. It took some time, though.");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(13, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("H6C13000_M02500", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "All of these...");
            Message_Who(0);
            Message_MsgDisp("主人公", "W-Well, please sit!");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        if (Parameter_GetPl1Param(20) >= 80){
            if (Parameter_GetCh1Param(13, 513) != 1){
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(13, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("H6C13000_M02600", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Gee!\nYou kept the fact that you're good\nat cooking a secret from me!\nBut it was tough to make, right?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Haha, maybe. Was it nice?");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(13, 3, (#1));
                Voice_PlayVoice("H6C13000_M02700", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Yes, even better than the\nrestaurant's that I went to\nrecently.\nGive me the recipe next time, okay?\nThanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nI'm glad I tried my best making\nfood.)");
                }
            else {
                Character_ChFace(0, 0, 8);
                Voice_PlayVoice("H6C13000_M02800", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Thanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, the food isn't worth thanking me\nfor.");
                Character_BlinkStart(13, 2, (#1));
                Character_BlinkStart(13, 0, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("H6C13000_M02900", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "You didn't have to hide the fact\nthat you are good at cooking...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(13, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ah, she ate it all.\nI'm glad I tried my best making\nfood.)");
                }
            Parameter_AddCh1Param(13, 60, 5);
            }
        else {
            if (Parameter_GetCh1Param(13, 513) != 1){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(13, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H6C13000_M03000", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Thanks for the food. I'm full.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh, have you had enough already?");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(13, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H6C13000_M03100", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Y-Yeah.\nMaybe I ate too much for lunch?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice... Sorry.)");
                }
            else {
                Character_ChFace(0, 0, 8);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("H6C13000_M03200", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Thanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh, have you had enough already?");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(13, 3, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("H6C13000_M03300", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "I'm a little relieved that I don't\nlike this...");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(13, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice...)");
                }
            Parameter_AddCh1Param(13, 60, #5);
            }
        break ;
        }
    }
