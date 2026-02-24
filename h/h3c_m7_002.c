section "h3c_m7_002"{
    Background_Bg_GS2("BG_SC710_SU_1", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "It's my turn to make food today.\nWhat should I make?");
    Message_MsgSel("Canned yakitori.", "Special chicken and egg on rice.", "Stuffed chicken wing tips.");
    switch (Message_TextSelect()){
        case 0:
        Message_Who(0);
        Message_MsgDisp("主人公", "Hmm...\nIt's bothersome, so I'll just make\ncanned yakitori.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        if (Parameter_GetCh1Param(7, 130) <= 2){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
            Voice_PlayVoice("H3C07000_G04200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Are you in charge of making food\ntoday?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, that is right.");
            Voice_PlayVoice("H3C07000_G04300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I am already hungry.\nIt must be because of the atmosphere\nin the training camp.\nSo, on today's menu is...");
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("H3C07000_G04400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "... This!");
            }
        else if (Parameter_GetCh1Param(7, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
            Voice_PlayVoice("", 7, "H3C07000_G04500");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝, it was your\nturn to make food today, right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, that is right.");
            Voice_PlayVoice("H3C07000_G04600", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I am sure that the boys will be\nasking for seconds.\nSo, on today's menu is...");
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("H3C07000_G04700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "... This?");
            }
        else {
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 4, 1);
            Character_Chara_GS2(7, "M7_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
            Voice_PlayVoice("", 7, "H3C07000_G04800");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "You've worked hard,\n｛主人公｝.\nSo you were in charge of making food\ntoday.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, that is right.");
            Voice_PlayVoice("H3C07000_G04900", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I will gratefully eat it, then.\nI wonder what we will be eating...");
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("H3C07000_G05000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "... I see.");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 1);
        if (Parameter_GetCh1Param(7, 130) <= 2){
            Voice_PlayVoice("H3C07000_G05100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "This yakitori...\nis quite similar to the kind of\ncanned yakitori I make.");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(7, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nI should have made proper food.)");
            }
        else if (Parameter_GetCh1Param(7, 130) == 3){
            Voice_PlayVoice("H3C07000_G05200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Two cans... I mean, two bowls.\nPlease offer the hungry people two\nbowls of food.");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(7, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nI should have made proper food.)");
            }
        else {
            Voice_PlayVoice("H3C07000_G05300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Thanks for the food...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Umm...");
            Voice_PlayVoice("H3C07000_G05400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Thanks for the food.\nI am going to keep my mouth shut\nnow.");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(7, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nI should have made proper food.)");
            }
        Parameter_AddCh1Param(7, 61, #1);
        break ;
        case 1:
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, I'll make special chicken and\negg on rice!");
        Message_CloseMsg();
        Screen_WipeOut(2);
        if (Parameter_GetCh1Param(7, 130) <= 2){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
            Voice_PlayVoice("H3C07000_G05500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Ah, are you in charge of making the\nfood today?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, that is right.");
            Character_BlinkStart(7, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H3C07000_G05600", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I wonder what is on today's menu?\nI am looking forward to it.");
            }
        else if (Parameter_GetCh1Param(7, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
            Voice_PlayVoice("", 7, "H3C07000_G05700");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝, you were in\ncharge of making food today?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, that is right.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H3C07000_G05800", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "... I smell salty-sweet soy sauce.\nI am excited.");
            }
        else {
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(7, "M7_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
            Voice_PlayVoice("", 7, "H3C07000_G05900");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝, you've worked\nhard making food today.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H3C07000_G06000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I wonder what is on today's menu...\nAh, this looks nice.\nIt is nice, right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "It's something you'll have to eat to\nfind out.\nNow then, let's eat.");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        if (Parameter_GetPl1Param(20) >= 60){
            Character_ChFace(0, 0, 10);
            if (Parameter_GetCh1Param(7, 130) <= 2){
                Voice_PlayVoice("H3C07000_G06100", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "This is the enjoyment of training\ncamp.\nYay for special chicken and egg on\nrice!");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Thank gosh. He ate it all!)");
                }
            else if (Parameter_GetCh1Param(7, 130) == 3){
                Voice_PlayVoice("", 7, "H3C07000_G06200");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "｛主人公｝, this is nice!\nPlease give me more rice this time.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yay, he's digging into his second\nbowl!)");
                }
            else {
                Voice_PlayVoice("", 7, "H3C07000_G06300");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Thank you, ｛主人公｝.\nYour special chicken and egg on rice\nis another one of my favorites.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yay!\nIt seems like it was really yummy.)");
                }
            Parameter_AddCh1Param(7, 61, 3);
            }
        else {
            if (Parameter_GetCh1Param(7, 130) <= 2){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("H3C07000_G06400", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Ah...\nThis bitter taste is an awful\nintrusion on my taste buds.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice. Sorry...)");
                }
            else if (Parameter_GetCh1Param(7, 130) == 3){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("H3C07000_G06500", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "...\nAh, this is comparable to the snake\negg rice that I've eaten before.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice. Sorry...)");
                }
            else {
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("", 7, "H3C07000_G06600");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "...\n｛主人公｝, let's run\nfive laps.\nWe'll definitely be hungry after\nthat.");
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
        Message_MsgDisp("主人公", "Alright!\nI'll take on the stuffed chicken\nwing tips!");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(7, "M7_08F", 0);
        Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
        if (Parameter_GetCh1Param(7, 130) <= 2){
            Voice_PlayVoice("H3C07000_G06700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "So it is your turn to make food\ntoday.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, I made stuffed chicken wing\ntips.");
            Voice_PlayVoice("H3C07000_G06800", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "What is that?");
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("H3C07000_G06900", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Oh! ...\nIt clearly looks like it doesn't\ntaste like fried chicken skin.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Haha! Please eat it.");
            }
        else if (Parameter_GetCh1Param(7, 130) == 3){
            Voice_PlayVoice("", 7, "H3C07000_G07000");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝, was it your\nturn to make food today?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, I made stuffed chicken wing\ntips.");
            Voice_PlayVoice("H3C07000_G07100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "So this fragrance is your doing.\nWhat kind of food is it?");
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("H3C07000_G07200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Ah, there is something stuffed\ninside the chicken wing tip.\nYou're detailed when it comes to\nwork.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Haha, please eat.");
            }
        else {
            Voice_PlayVoice("", 7, "H3C07000_G07300");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝, was it your\nturn to make food today?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝!\nYes, that's right.");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(7, 3, (#1));
            Voice_PlayVoice("H3C07000_G07400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I am hungry today.\nI would be glad if I could eat a\nlot...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Please eat a lot.\nIt's stuffed chicken wing tips.");
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("H3C07000_G07500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Oh, this has an ethnic feeling to\nit!\nBut I cannot imagine the taste....\nDid you really make this?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes. Please eat.");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        if (Parameter_GetPl1Param(20) >= 80){
            Character_ChFace(0, 0, 10);
            if (Parameter_GetCh1Param(7, 130) <= 2){
                Voice_PlayVoice("H3C07000_G07600", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Thanks for the food.\nIt seems like I am being drawn into\nthe world of food.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nI'm glad I tried my best making\nfood.)");
                }
            else if (Parameter_GetCh1Param(7, 130) == 3){
                Voice_PlayVoice("H3C07000_G07700", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Thanks for the food.\nI cannot underestimate you...");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nI'm glad I put effort into making\nthe food.)");
                }
            else {
                Voice_PlayVoice("H3C07000_G07800", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "... Thanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Wakaouji＊＊｝... How was it?");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(7, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H3C07000_G07900", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "... This is bad.\nBefore I express my gratitude, I\nneed to sigh in admiration.");
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
                Voice_PlayVoice("H3C07000_G08000", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "...\nIt sort of tasted like a duck's\nthigh meat.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh!?");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice. Sorry...)");
                }
            else if (Parameter_GetCh1Param(7, 130) == 3){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("H3C07000_G08100", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "...\nWe also have to train our stomachs\nduring training camp, as well.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice. Sorry...)");
                }
            else {
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("H3C07000_G08200", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "... Thanks for the food.\nYou are a high school student, so\nyou are still growing.");
                Voice_PlayVoice("H3C07000_G08300", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Humans are fluid. I am not worried.\nI am not worried at all.");
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
