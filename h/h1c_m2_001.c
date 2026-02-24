section "h1c_m2_001"{
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
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(2, "M2_08F", 0);
        Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_02_000_D00", 127, 40);
        if (Parameter_GetCh1Param(2, 130) <= 2){
            Voice_PlayVoice("H1C02000_B00000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "So it's your turn to cook today...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, that's right.");
            Voice_PlayVoice("H1C02000_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "So we're eating...");
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("H1C02000_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... No way... This...?");
            }
        else if (Parameter_GetCh1Param(2, 130) == 3){
            Voice_PlayVoice("", 2, "H1C02000_B00300");
            Message_Who(2);
            Message_MsgDisp("Shiba", "｛主人公｝, so it's your\nturn to cook today.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, that's right.");
            Voice_PlayVoice("H1C02000_B00400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I see. What's on the menu today?");
            Message_Who(0);
            Message_MsgDisp("主人公", "U-Umm... This...");
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("H1C02000_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... This?");
            }
        else {
            Voice_PlayVoice("", 2, "H1C02000_B00600");
            Message_Who(2);
            Message_MsgDisp("Shiba", "｛主人公｝, so it was\nyour turn to cook today.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, that's right.");
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("H1C02000_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I look forward to it....\nSo what's on the menu?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Umm, this...");
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("H1C02000_B00800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Are you talking about this?");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Character_ChFace(0, 0, 3);
        Character_BlinkStart(2, 2, (#1));
        if (Parameter_GetCh1Param(2, 130) <= 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "Umm... how was it?");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("H1C02000_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... *Sigh*...");
            Character_ChFace(0, 7, 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nI should have made proper food...)");
            }
        else if (Parameter_GetCh1Param(2, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Umm... how was it?");
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("H1C02000_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... I didn't feel like eating it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(As expected, I should have made\nproper food...)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "Umm... how was it?");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(2, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("H1C02000_B01100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "It wasn't enough...\nShouldn't you have planned out what\nkinda things you'd need?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nI should have been more accurate in\nmaking it...)");
            }
        Parameter_AddCh1Param(2, 61, #1);
        break ;
        case 1:
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, I'll make\n｛主人公姓名｝'s special\ncurry!");
        Message_CloseMsg();
        Screen_WipeOut(2);
        if (Parameter_GetCh1Param(2, 130) <= 2){
            Character_ChFace(0, 0, 11);
            Character_Chara_GS2(2, "M2_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_02_000_D00", 127, 40);
            Voice_PlayVoice("H1C02000_B01200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Eh... homemade, huh.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah. Try some.");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("H1C02000_B01300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Okay.");
            }
        else if (Parameter_GetCh1Param(2, 130) == 3){
            Character_ChFace(0, 0, 11);
            Character_Chara_GS2(2, "M2_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_02_000_D00", 127, 40);
            Voice_PlayVoice("H1C02000_B01400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "It's amazing that it's homemade.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah. Try some.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H1C02000_B01500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I will then.");
            }
        else {
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(2, "M2_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_02_000_D00", 127, 40);
            Voice_PlayVoice("H1C02000_B01600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Your homemade food, huh.\nI look forward to it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah.\nI don't have much confidence in the\nflavor...\nBut please eat it.");
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("H1C02000_B01700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I will then.");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Character_ChFace(0, 0, 3);
        Character_BlinkStart(2, 2, (#1));
        if (Parameter_GetPl1Param(20) >= 60){
            if (Parameter_GetCh1Param(2, 130) <= 2){
                Message_Who(0);
                Message_MsgDisp("主人公", "How was it?");
                Character_ChFace(0, 0, 3);
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("H1C02000_B01800", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "It was nice. Thanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'm glad he ate it all!)");
                }
            else if (Parameter_GetCh1Param(2, 130) == 3){
                Message_Who(0);
                Message_MsgDisp("主人公", "How was it?");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H1C02000_B01900", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Do you usually cook? It was nice.\nThanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Thank gosh... I was complimented!)");
                }
            else {
                Message_Who(0);
                Message_MsgDisp("主人公", "How was it?");
                Character_ChFace(0, 0, 6);
                Voice_PlayVoice("H1C02000_B02000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "You're... good at cooking.\nIt seems like you'd be a good wife.\nThanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yay, it seems like it was yummy!)");
                }
            Parameter_AddCh1Param(2, 61, 3);
            }
        else {
            if (Parameter_GetCh1Param(2, 130) <= 2){
                Message_Who(0);
                Message_MsgDisp("主人公", "Umm... how was it?");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H1C02000_B02100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... I can't handle any more.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh...\nIt seems like it wasn't nice.\nI have to try harder!)");
                }
            else if (Parameter_GetCh1Param(2, 130) == 3){
                Message_Who(0);
                Message_MsgDisp("主人公", "Umm... how was it?");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(2, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H1C02000_B02200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "I question your sense of taste...\nWhat exactly did you do to get this\nflavor?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh...\nI have to make the food better, next\ntime.)");
                }
            else {
                Message_Who(0);
                Message_MsgDisp("主人公", "Umm... how was it?");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H1C02000_B02300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... It was unique taste.\nI guess we have different tastes...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ah... It seems like it wasn't nice.\nI have to do my best next time.)");
                }
            Parameter_AddCh1Param(2, 61, #3);
            }
        break ;
        case 2:
        Message_Who(0);
        Message_MsgDisp("主人公", "Alright!\nI'll take on the Pu pat pong curry!");
        Message_CloseMsg();
        Screen_WipeOut(2);
        if (Parameter_GetCh1Param(2, 130) <= 2){
            Character_ChFace(0, 0, 11);
            Character_Chara_GS2(2, "M2_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_02_000_D00", 127, 40);
            Voice_PlayVoice("H1C02000_B02400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... What is this?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Fried crab curry.\nEat it at your own pace, okay?");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("H1C02000_B02500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Okay.");
            }
        else if (Parameter_GetCh1Param(2, 130) == 3){
            Character_ChFace(0, 0, 11);
            Character_Chara_GS2(2, "M2_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_02_000_D00", 127, 40);
            Voice_PlayVoice("H1C02000_B02600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Eh.\nYou made something that looks nice.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Haha. Eat at at your own pace, okay?");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("H1C02000_B02700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Okay.");
            }
        else {
            Character_BlinkStart(2, 2, (#1));
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(2, "M2_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_02_000_D00", 127, 40);
            Voice_PlayVoice("H1C02000_B02800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "It looks nice....\nI was right to look forward to the\ntraining camp.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Haha. Eat at at your own pace, okay?");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("H1C02000_B02900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Okay.");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Character_ChFace(0, 0, 3);
        Character_BlinkStart(2, 2, (#1));
        if (Parameter_GetPl1Param(20) >= 80){
            if (Parameter_GetCh1Param(2, 130) <= 2){
                Message_Who(0);
                Message_MsgDisp("主人公", "How was it?");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H1C02000_B03000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "It tasted as good as it looked.\nThanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'm glad he ate it all!)");
                }
            else if (Parameter_GetCh1Param(2, 130) == 3){
                Message_Who(0);
                Message_MsgDisp("主人公", "How was it?");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(2, 2, (#1));
                Voice_PlayVoice("H1C02000_B03100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "You seem like you normally cook....\nI'm seeing you in a new light.\nThanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yay, it seems like it was yummy!)");
                }
            else {
                Message_Who(0);
                Message_MsgDisp("主人公", "Umm... how was it?");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H1C02000_B03200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nThe other guys look happy eating it.");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H1C02000_B03300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "It was nice. Thanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'm glad he liked it...)");
                }
            Parameter_AddCh1Param(2, 61, 5);
            }
        else {
            if (Parameter_GetCh1Param(2, 130) <= 2){
                Message_Who(0);
                Message_MsgDisp("主人公", "Umm... how was it?");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(2, 3, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("H1C02000_B03400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Don't ask.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh...\nIt seems like it wasn't nice.\nI have to try harder!)");
                }
            else if (Parameter_GetCh1Param(2, 130) == 3){
                Message_Who(0);
                Message_MsgDisp("主人公", "How was it?");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H1C02000_B03500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "I appreciate the effort.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(It seems like it was a failure...\nI have to do better.)");
                }
            else {
                Message_Who(0);
                Message_MsgDisp("主人公", "How was it?");
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H1C02000_B03600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nThe only one able to eat it all was\nme.\nDon't ask around about it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh...\nI should try harder next time...)");
                }
            Parameter_AddCh1Param(2, 61, 5);
            }
        break ;
        }
    }
