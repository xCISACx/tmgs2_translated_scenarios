section "h3c_m7_001"{
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
        if (Parameter_GetCh1Param(7, 130) <= 2){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
            Voice_PlayVoice("H3C07000_G00000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Are you in charge of making food\ntoday?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, that is right.");
            Voice_PlayVoice("H3C07000_G00100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I'm also hungrier than usual at\ntraining camps.\nSo, on today's menu is...");
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("H3C07000_G00200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "... Oh!");
            }
        else if (Parameter_GetCh1Param(7, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
            Voice_PlayVoice("", 7, "H3C07000_G00300");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝, if I'm not\nmistaken, today is your turn to make\ndinner.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, that is right.");
            Voice_PlayVoice("H3C07000_G00400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I will make sure that the boys won't\nask for seconds.\nSo, on today's menu is...");
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("H3C07000_G00500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "... Oh?");
            }
        else {
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 4, 1);
            Character_Chara_GS2(7, "M7_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
            Voice_PlayVoice("", 7, "H3C07000_G00600");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "You've worked hard,\n｛主人公｝.\nYou've worked hard making today's\nmeal.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, that is right.");
            Voice_PlayVoice("H3C07000_G00700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I will gratefully eat it, then.\nI wonder what we will be eating...");
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("H3C07000_G00800", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "... Oh.");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 1);
        if (Parameter_GetCh1Param(7, 130) <= 2){
            Voice_PlayVoice("H3C07000_G00900", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "This curry...\nhas the same flavor as the packet\ncurry I've stocked up at home.");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(7, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nI should have made proper food.)");
            }
        else if (Parameter_GetCh1Param(7, 130) == 3){
            Voice_PlayVoice("H3C07000_G01000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Two packs... I mean, two bowls.\nPlease give two bowls for the boys\nto eat.");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(7, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nI should have made proper food.)");
            }
        else {
            Voice_PlayVoice("H3C07000_G01100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Thanks for the food...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Umm...");
            Voice_PlayVoice("H3C07000_G01200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Don't listen to anything except\npeople thanking you for the food.\nI'm saying this out of niceness.");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(7, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nI should have made proper food.)");
            }
        Parameter_AddCh1Param(7, 61, #1);
        break ;
        case 1:
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, I'll make\n｛主人公姓名｝'s special\ncurry!");
        Message_CloseMsg();
        Screen_WipeOut(2);
        if (Parameter_GetCh1Param(7, 130) <= 2){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
            Voice_PlayVoice("H3C07000_G01300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Ah, so it's your turn to make food\ntoday.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, that is right.");
            Character_BlinkStart(7, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H3C07000_G01400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I look forward to what you will be\nmaking for us.");
            }
        else if (Parameter_GetCh1Param(7, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
            Voice_PlayVoice("", 7, "H3C07000_G01500");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝, is it your\nturn to make food today?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, that is right.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H3C07000_G01600", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "... I smell curry!\nI'm getting excited now.");
            }
        else {
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(7, "M7_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
            Voice_PlayVoice("", 7, "H3C07000_G01700");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝, you've worked\nhard on making today's meal.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝!");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H3C07000_G01800", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "What is on the menu today...\nAh, this curry looks nice.\nIt tastes nice, right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "It's something you'll have to eat to\nfind out.\nNow then, let's eat.");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        if (Parameter_GetPl1Param(20) >= 60){
            Character_ChFace(0, 0, 10);
            if (Parameter_GetCh1Param(7, 130) <= 2){
                Voice_PlayVoice("H3C07000_G01900", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "This is the enjoyment of training\ncamp.\nHomemade curry is the best!");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Thank gosh. He ate it all!)");
                }
            else if (Parameter_GetCh1Param(7, 130) == 3){
                Voice_PlayVoice("", 7, "H3C07000_G02000");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "｛主人公｝, that was\ndelicious!\nThere is lots of meat.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yay, he's digging into his second\nbowl!)");
                }
            else {
                Voice_PlayVoice("", 7, "H3C07000_G02100");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Thank you, ｛主人公｝.\nYour homemade curry is my favorite\ndish now.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yay!\nIt seems like it was really yummy.)");
                }
            Parameter_AddCh1Param(7, 61, 3);
            }
        else {
            if (Parameter_GetCh1Param(7, 130) <= 2){
                Character_BlinkStart(7, 0, (#1));
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("H3C07000_G02200", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Ah...\nSo that is what you were aiming for.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice. Sorry...)");
                }
            else if (Parameter_GetCh1Param(7, 130) == 3){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(7, 3, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("H3C07000_G02300", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "...\nThe wild senses that I used to have\nin the past have suddenly returned\nto me.\nMy body is pumping.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice. Sorry...)");
                }
            else {
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("", 7, "H3C07000_G02400");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "...\n｛主人公｝, Let's focus\non training camp.\nWhen it is your turn to cook, please\nask someone else to do it.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice. Sorry...)");
                }
            Parameter_AddCh1Param(7, 61, #3);
            }
        break ;
        case 2:
        Message_Who(0);
        Message_MsgDisp("主人公", "Alright!\nI'll take on the pu pat pong curry!");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(7, "M7_08F", 0);
        Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
        if (Parameter_GetCh1Param(7, 130) <= 2){
            Voice_PlayVoice("H3C07000_G02500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "So it is your turn to make food\ntoday.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, I made pu pat pong curry.");
            Voice_PlayVoice("H3C07000_G02600", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Pu-pat-pong. What a cute name.\nI will eat.");
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("H3C07000_G02700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Oh! ...\nThis is my first time encountering\nthis food.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Haha! So, please eat.");
            }
        else if (Parameter_GetCh1Param(7, 130) == 3){
            Voice_PlayVoice("", 7, "H3C07000_G02800");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝, was it your\nturn to make food today?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, I made pu pat pong curry.");
            Voice_PlayVoice("H3C07000_G02900", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Alliteration with 3 'P' sounds.\nLet me see now.");
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("H3C07000_G03000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Oh, the crabs are intense.\nSaying that it is more intense than\nI am is not an exaggeration.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Haha! So, please eat.");
            }
        else {
            Voice_PlayVoice("", 7, "H3C07000_G03100");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝, it was your\nturn to make food today, right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝!\nYes, that is right.");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(7, 3, (#1));
            Voice_PlayVoice("H3C07000_G03200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I am completely exhausted today.\nI would be glad if I was able to eat\nplenty of food...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Then take plenty.\nIt's pu pat pong curry.");
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("H3C07000_G03300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Oh, we're having crab at training\ncamp!\nI cannot imagine what it would taste\nlike....\nDid you really make this?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, of course. So, please eat.");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        if (Parameter_GetPl1Param(20) >= 80){
            Character_ChFace(0, 0, 10);
            if (Parameter_GetCh1Param(7, 130) <= 2){
                Voice_PlayVoice("H3C07000_G03400", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Thanks for the food.\nMy world of food has expanded.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nI'm glad I put effort into making\nthe food.)");
                }
            else if (Parameter_GetCh1Param(7, 130) == 3){
                Voice_PlayVoice("H3C07000_G03500", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Thanks for the food.\nSo there is such delicious food in\nthis world...");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nI'm glad I put effort into making\nthe food.)");
                }
            else {
                Voice_PlayVoice("H3C07000_G03600", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "... Thanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Wakaouji＊＊｝... How was it?");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(7, 3, (#1));
                Voice_PlayVoice("H3C07000_G03700", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "... This is bad.\nI don't have enough words to express\nhow nice this food is.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nI'm glad I put effort into making\nthe food.)");
                }
            Parameter_AddCh1Param(7, 61, 5);
            }
        else {
            if (Parameter_GetCh1Param(7, 130) <= 2){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("H3C07000_G03800", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "...\nThe food samples at restaurants were\nalso like this...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh!?");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Sorry, it seems like this isn't\nsomething that can be eaten...)");
                }
            else if (Parameter_GetCh1Param(7, 130) == 3){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("H3C07000_G03900", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "... Practice, right?");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice. Sorry...)");
                }
            else {
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("H3C07000_G04000", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "... Thanks for the food.\nYou work hard, don't you?\nThat is both a good and bad thing.");
                Voice_PlayVoice("H3C07000_G04100", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Humans have various traits.\nI am not worried.\nI am not worried at all.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice. Sorry...)");
                }
            Parameter_AddCh1Param(7, 61, 5);
            }
        break ;
        }
    }
