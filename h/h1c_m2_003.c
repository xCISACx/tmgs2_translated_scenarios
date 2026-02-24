section "h1c_m2_003"{
    Background_Bg_GS2("BG_SC710_SU_1", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "It's my turn to make food today.\nSo, what should I make...");
    Message_MsgSel("Microwave gyuudon.", "｛主人公姓名｝'s special stir fry.", "Ossobuco.");
    switch (Message_TextSelect()){
        case 0:
        Message_Who(0);
        Message_MsgDisp("主人公", "Hmm...\nIt's bothersome, so I'll just make\nmicrowave gyuudon.");
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
            Message_MsgDisp("主人公", "Um... how was it?");
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
        Message_MsgDisp("主人公", "Yeah, I'll making\n｛主人公姓名｝'s special\nChinese stir fry!");
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
                Character_BlinkStart(2, 2, (#1));
                Character_BlinkStart(2, 0, (#1));
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
                Message_MsgDisp("主人公", "How was it?");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H1C02000_B05700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Do you want to make me say it?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh...\nIt seems like it wasn't nice.\nI have to try harder!)");
                }
            else if (Parameter_GetCh1Param(2, 130) == 3){
                Message_Who(0);
                Message_MsgDisp("主人公", "Umm... how was it?");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H1C02000_B05800", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nI know why you don't cook at home.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I should have tried harder.)");
                }
            else {
                Message_Who(0);
                Message_MsgDisp("主人公", "Umm... how was it?");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("H1C02000_B05900", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Do you only not like Chinese food?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("H1C02000_B06000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "I'm just basing it on this......\nAh, sorry.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh...\nI should have tried harder...)");
                }
            Parameter_AddCh1Param(2, 61, #3);
            }
        break ;
        case 2:
        Message_Who(0);
        Message_MsgDisp("主人公", "Alright! I'll take on Ossobuco!");
        Message_CloseMsg();
        Screen_WipeOut(2);
        if (Parameter_GetCh1Param(2, 130) <= 2){
            Character_ChFace(0, 0, 11);
            Character_Chara_GS2(2, "M2_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_02_000_D00", 127, 40);
            Voice_PlayVoice("H1C02000_B06100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... You're too hyped up for this.");
            Message_Who(0);
            Message_MsgDisp("主人公", "R-Really... Why don't you try it?");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("H1C02000_B06200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Okay.");
            }
        else if (Parameter_GetCh1Param(2, 130) == 3){
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_02_000_D00", 127, 40);
            Voice_PlayVoice("H1C02000_B06300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... The smell is making me hungry.\nIt also looks nice.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Haha. Why don't you try it?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H1C02000_B06400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Okay.");
            }
        else {
            Character_ChFace(0, 0, 11);
            Character_BlinkStart(2, 2, (#1));
            Character_Chara_GS2(2, "M2_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_02_000_D00", 127, 40);
            Voice_PlayVoice("H1C02000_B06500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Doesn't this take long to make?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, I kind of did my best.");
            Character_ChFace(0, 3, 3);
            Character_BlinkStart(2, 3, (#1));
            Voice_PlayVoice("H1C02000_B06600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... I see. I'll savor it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Haha. Please go ahead and eat.");
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
                Voice_PlayVoice("H1C02000_B06700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "It was nice. Thanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'm glad he ate it all!)");
                }
            else if (Parameter_GetCh1Param(2, 130) == 3){
                Message_Who(0);
                Message_MsgDisp("主人公", "Umm... how was it?");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H1C02000_B06800", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Just as it looked.\nYou're good at cooking.\nThanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yay, it seems like it was yummy!)");
                }
            else {
                Message_Who(0);
                Message_MsgDisp("主人公", "Umm... how was it?");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(2, 0, (#1));
                Character_BlinkStart(2, 0, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H1C02000_B06900", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "It was nice.... Hey.");
                Message_Who(0);
                Message_MsgDisp("主人公", "What?");
                Character_ChFace(0, 0, 11);
                Character_BlinkStart(2, 2, (#1));
                Voice_PlayVoice("H1C02000_B07000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "You're not letting other guys eat\nthis, right?");
                Message_Who(0);
                Message_MsgDisp("主人公", "I am.");
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("H1C02000_B07100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "!!! Is that... so....");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, all the club members.");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(2, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H1C02000_B07200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "............ It's fine then.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Thank gosh I focused on making\nthis...)");
                }
            Parameter_AddCh1Param(2, 61, 5);
            }
        else {
            if (Parameter_GetCh1Param(2, 130) <= 2){
                Message_Who(0);
                Message_MsgDisp("主人公", "How was it?");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("H1C02000_B07300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... It was a waste of your energy.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh...\nI should have tried harder...)");
                }
            else if (Parameter_GetCh1Param(2, 130) == 3){
                Message_Who(0);
                Message_MsgDisp("主人公", "Umm... how was it?");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H1C02000_B07400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Why does it taste like this?\nIt looked and smelled good, too.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I failed...\nI should have tried harder...)");
                }
            else {
                Message_Who(0);
                Message_MsgDisp("主人公", "Umm... how was it?");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(2, 2, (#1));
                Character_BlinkStart(2, 0, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H1C02000_B07500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nHonestly, it's not something to give\nto people.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ugh...");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(2, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H1C02000_B07600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "But actually...\nI'm a little relieved.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 0, 9);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H1C02000_B07700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "There might be guys who will give up\nafter this, right?");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("H1C02000_B07800", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "It's fine if you try harder at\ncooking, and leave the tasting to\nme....\nThanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(What does he mean?\nBut I should have tried harder...)");
                }
            Parameter_AddCh1Param(2, 61, 5);
            }
        break ;
        }
    }
