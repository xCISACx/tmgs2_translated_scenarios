section "h3c_m7_003"{
    Background_Bg_GS2("BG_SC710_SU_1", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "It's my turn to make food today.\nWhat should I make?");
    Message_MsgSel("Microwave gyuudon.", "｛主人公姓名｝'s special stir fry.", "Ossobuco.");
    switch (Message_TextSelect()){
        case 0:
        Message_Who(0);
        Message_MsgDisp("主人公", "Hmm...\nIt's bothersome, so I'll just make\nmicrowave gyuudon.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        if (Parameter_GetCh1Param(7, 130) <= 2){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
            Voice_PlayVoice("H3C07000_G08400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Are you in charge of making food\ntoday?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, that is right.");
            Voice_PlayVoice("H3C07000_G08500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I am already hungry.\nIt must be because of the atmosphere\nin the training camp.\nSo, on today's menu is...");
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("H3C07000_G08600", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "... Oh?");
            }
        else if (Parameter_GetCh1Param(7, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
            Voice_PlayVoice("", 7, "H3C07000_G08700");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝, so it's your\nturn to make food today.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, that is right.");
            Voice_PlayVoice("H3C07000_G08800", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I can assure you that the first\nyears will want seconds, as they\nwill have returned back from\nservicing the equipment.\nSo...");
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("H3C07000_G08900", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Oh?");
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_ChFace(0, 4, 1);
            Character_Chara_GS2(7, "M7_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
            Voice_PlayVoice("", 7, "H3C07000_G09000");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝, you've worked\nhard.\nAfter practice, will you be in\ncharge of making food today?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, that is right.");
            Voice_PlayVoice("H3C07000_G09100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Sorry for intruding while you are\nbusy.\nI wonder what you are making...");
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("H3C07000_G09200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "... I see.");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 0);
        if (Parameter_GetCh1Param(7, 130) <= 2){
            Voice_PlayVoice("H3C07000_G09300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "This gyuudon...\nIt tastes similar to the\npre-packaged gyuudon that I received\nfrom a raffle.");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(7, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nI should have made proper food.)");
            }
        else if (Parameter_GetCh1Param(7, 130) == 3){
            Voice_PlayVoice("H3C07000_G09400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Two boxes... I mean, two bowls.\nPlease bring two bowls to the first\nyear students.");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(7, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nI should have made proper food.)");
            }
        else {
            Voice_PlayVoice("H3C07000_G09500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Thanks for the food...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Umm...");
            Voice_PlayVoice("H3C07000_G09600", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Thanks for the food.\nPlease don't ask me anything.");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(7, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nI should have made proper food.)");
            }
        Parameter_AddCh1Param(7, 61, #1);
        break ;
        case 1:
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, I'll make special Chinese stir\nfry!");
        Message_CloseMsg();
        Screen_WipeOut(2);
        if (Parameter_GetCh1Param(7, 130) <= 2){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
            Voice_PlayVoice("H3C07000_G09700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Ah, are you in charge of making the\nfood today?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, that is right.");
            Character_BlinkStart(7, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H3C07000_G09800", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I wonder what is on today's menu.\nI am looking forward to it.");
            }
        else if (Parameter_GetCh1Param(7, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
            Voice_PlayVoice("", 7, "H3C07000_G09900");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝, you were in\ncharge of making food today?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, that is right.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H3C07000_G10000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "... I smell meat being fried!\nI am excited.");
            }
        else {
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(7, "M7_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
            Voice_PlayVoice("", 7, "H3C07000_G10100");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝, you've worked\nhard making food today.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝!");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H3C07000_G10200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I wonder what is on today's menu...\nAh, this stir fry looks nice.\nIt is nice, right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "It's something you'll have to eat to\nfind out.\nNow then, let's eat.");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        if (Parameter_GetPl1Param(20) >= 60){
            Character_ChFace(0, 0, 10);
            if (Parameter_GetCh1Param(7, 130) <= 2){
                Voice_PlayVoice("H3C07000_G10300", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Chinese food has a variety of dishes\nthat are perfect for adult tastes.\nThis stir fry is nice!");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Thank gosh. He ate it all!)");
                }
            else if (Parameter_GetCh1Param(7, 130) == 3){
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("", 7, "H3C07000_G10400");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "｛主人公｝, this is nice!\nIs there still some sauce left?");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yay, he got seconds!)");
                }
            else {
                Voice_PlayVoice("", 7, "H3C07000_G10500");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Thank you, ｛主人公｝.\nYour stir fry is entering the palace\nof my favorite foods.");
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
                Voice_PlayVoice("H3C07000_G10600", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Ah...\nIt tastes like boiled ivy vines.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice. Sorry...)");
                }
            else if (Parameter_GetCh1Param(7, 130) == 3){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("H3C07000_G10700", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "...\nThis rivals my own homemade food.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice. Sorry...)");
                }
            else {
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("", 7, "H3C07000_G10800");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "...\n｛主人公｝, let's do 10\nsets of sit-ups.\nWe will surely be hungry after doing\nthat.");
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
        Message_MsgDisp("主人公", "Alright! I'll take on Ossobuco!");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(7, "M7_08F", 0);
        Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
        if (Parameter_GetCh1Param(7, 130) <= 2){
            Voice_PlayVoice("H3C07000_G10900", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "You are in charge of making food\ntoday.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, I made Ossobuco.");
            Voice_PlayVoice("H3C07000_G11000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Ossobuco...\nIt is my first time hearing that\nname.\nIt has a Latin feel to it.");
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("H3C07000_G11100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Oh!\nWhy do we have meat that is still\nattached to the bone here?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Haha! I will remove them, then.");
            }
        else if (Parameter_GetCh1Param(7, 130) == 3){
            Voice_PlayVoice("", 7, "H3C07000_G11200");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝, was it your\nturn to make food today?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, I made Ossobuco.");
            Voice_PlayVoice("H3C07000_G11300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "So this is the smell of buco.\nWhat kind of cuisine is it?");
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("H3C07000_G11400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Ah, it's simmering beef.\nThis would have taken time.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Haha! So, please eat.");
            }
        else {
            Voice_PlayVoice("", 7, "H3C07000_G11500");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "So you were in charge of today's\nmeal, ｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝!\nYes, that is right.");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(7, 3, (#1));
            Voice_PlayVoice("H3C07000_G11600", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "My stomach is already growling.\nI would be glad if I could eat a\nlot...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Please eat a lot. This is Ossobuco.");
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("H3C07000_G11700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Oh, I am in the mood for Italian!\nBut I cannot imagine the flavor....\nDid you really make this?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes. Please eat.");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        if (Parameter_GetPl1Param(20) >= 80){
            Character_ChFace(0, 0, 10);
            if (Parameter_GetCh1Param(7, 130) <= 2){
                Voice_PlayVoice("H3C07000_G11800", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Thanks for the food.\nI am a prisoner in the world of\nfood.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nI'm glad I put effort into making\nthe food.)");
                }
            else if (Parameter_GetCh1Param(7, 130) == 3){
                Voice_PlayVoice("H3C07000_G11900", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Thanks for the food.\nBuco is amazing.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nI'm glad I put effort into making\nthe food.)");
                }
            else {
                Voice_PlayVoice("H3C07000_G12000", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "... Thanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Wakaouji＊＊｝... How was it?");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(7, 3, (#1));
                Voice_PlayVoice("H3C07000_G12100", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "... This is bad.\nI cannot find the right words I need\nto express how nice this is.");
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
                Voice_PlayVoice("H3C07000_G12200", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "...\nWhen you boil it, beef isn't that\ndifferent to bullfrog.");
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
                Voice_PlayVoice("H3C07000_G12300", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "...\nTo taste this bad, it surely must be\ngood for your body.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice. Sorry...)");
                }
            else {
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("H3C07000_G12400", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "... Thanks for the food.\nSince you are in the Track and Field\nClub, you are all about speed.");
                Voice_PlayVoice("H3C07000_G12500", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "It would have been nice if you took\nyour time cooking...\nBut I am not worried.\nI am not worried at all.");
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
