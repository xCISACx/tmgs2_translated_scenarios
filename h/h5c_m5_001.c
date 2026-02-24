section "h5c_m5_001"{
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
        Character_Chara_GS2(5, "M5_08F", 0);
        Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_05_000_D02", 127, 40);
        if (Parameter_GetCh1Param(5, 130) <= 2){
            Voice_PlayVoice("H5C05000_E00000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You've worked hard.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.\nYou've worked hard.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("H5C05000_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "What's for dinner tonight? ... This?");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Yeah.");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("H5C05000_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I see... How sad...");
            }
        else if (Parameter_GetCh1Param(5, 130) == 3){
            Voice_PlayVoice("H5C05000_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Oh, you're in charge of making food\ntoday?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, that's right.");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("H5C05000_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Eh, my heart is racing.\nSo what are we eating?");
            Message_Who(0);
            Message_MsgDisp("主人公", "U-Umm... This...");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("H5C05000_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... Uhh. As expected, there...\nisn't anything else...");
            }
        else {
            Voice_PlayVoice("", 5, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.");
            Voice_PlayVoice("H5C05000_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Were you in charge of making food\ntoday?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah. You remembered.");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("H5C05000_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah.\nI'm actually looking forward to it.\nSo we're having...\n*Sigh*............");
            Message_Who(0);
            Message_MsgDisp("主人公", "Umm, that...");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("H5C05000_E00800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... Do you feel unpleasant, or bad?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh? That's not it...");
            Voice_PlayVoice("H5C05000_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... Then it's fine.");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Character_ChFace(0, 0, 3);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 2);
        if (Parameter_GetCh1Param(5, 130) <= 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "Umm... how was it?");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("H5C05000_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It was yummy.\nIf I had to say, it tastes like\nready-made food.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nI should have made proper food...)");
            }
        else if (Parameter_GetCh1Param(5, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Umm... how was it?");
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("H5C05000_E01100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It was yummy.\nBut you shouldn't cut corners～.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nI should have made proper food...)");
            }
        else {
            Voice_PlayVoice("H5C05000_E01300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Thanks for the food...");
            Message_Who(0);
            Message_MsgDisp("主人公", "How was it?");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("H5C05000_E01400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It was yummy.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Really?");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(5, 3, (#1));
            Voice_PlayVoice("H5C05000_E01500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "...\nHonestly, I wanted to eat homemade\nfood.\nIt's unfortunate...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nI should have made proper food...)");
            }
        Parameter_AddCh1Param(5, 61, #1);
        break ;
        case 1:
        Message_Who(0);
        Message_MsgDisp("主人公", "Alright, I'll take on homemade\ncurry!\nI'll show everyone my determination!");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(5, "M5_08F", 0);
        Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_05_000_D02", 127, 40);
        if (Parameter_GetCh1Param(5, 130) <= 2){
            Voice_PlayVoice("H5C05000_E01600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You've worked hard.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.\nYou've worked hard.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H5C05000_E01700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Something smells nice...\nI'm hungry～.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay. Please eat.");
            }
        else if (Parameter_GetCh1Param(5, 130) == 3){
            Voice_PlayVoice("H5C05000_E01800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Oh, you're in charge of making food\ntoday?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, that's right.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H5C05000_E01900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I'm looking forward to it.\nAh, this smell is making me\nhungrier～.");
            Message_Who(0);
            Message_MsgDisp("主人公", "It would be nice if this suits your\ntastes.\nPlease eat!");
            }
        else {
            Voice_PlayVoice("", 5, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.");
            Voice_PlayVoice("H5C05000_E02000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You're in charge of making food\ntoday, right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah. You remembered.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H5C05000_E02100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It's the main event▼ Let me eat\nalready.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay, sorry to keep you waiting.\nPlease eat.");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        if (Parameter_GetPl1Param(20) >= 60){
            Character_ChFace(0, 0, 10);
            if (Parameter_GetCh1Param(5, 130) <= 2){
                Message_Who(0);
                Message_MsgDisp("主人公", "How was it?");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H5C05000_E02200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "So this is what they call a \"homey\"\ntaste...");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H5C05000_E02300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Girls who can make stuff like this\nare 100 times cuter.");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H5C05000_E02400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It was yummy. Thanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Thank gosh. He ate it all!)");
                }
            else if (Parameter_GetCh1Param(5, 130) == 3){
                Voice_PlayVoice("H5C05000_E02500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Thanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "How was it?");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H5C05000_E02600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I wanted to eat more. Is there more?");
                Message_Who(0);
                Message_MsgDisp("主人公", "There is. Do you want to eat it?");
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H5C05000_E02700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Yay.\nGive me lots of rice and lots of\ngarnishes.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'm glad I made proper food...)");
                }
            else {
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H5C05000_E02800", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Hah～. I ate quite a lot.\nI might have been okay eating a\nthird helping～.");
                Message_Who(0);
                Message_MsgDisp("主人公", "I'm glad that you ate a lot.");
                Voice_PlayVoice("H5C05000_E02900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I'm also glad.");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H5C05000_E03000", 5, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I'm so happy I could eat your\nhomemade food.\nThanks, ｛主人公｝.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yay!\nIt seems like it was really yummy!)");
                }
            Parameter_AddCh1Param(5, 61, 3);
            }
        else {
            Character_ChFace(0, 0, 9);
            if (Parameter_GetCh1Param(5, 130) <= 2){
                Voice_PlayVoice("H5C05000_E03100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Thanks for the food...");
                Message_Who(0);
                Message_MsgDisp("主人公", "... How was it?");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("H5C05000_E03200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Hmm.\nI'm unfit to have Mendable Joint\nDisorder.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Mendable Joint Disorder...?\nDo you mean that it Mandible Joint\nDisorder?");
                Voice_PlayVoice("H5C05000_E03300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Yeah, that.");
                Character_BlinkStart(5, 0, (#1));
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H5C05000_E03400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Putting in whole potatoes and\ncarrots are hard to eat.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I should have cooked it\nproperly...)");
                }
            else if (Parameter_GetCh1Param(5, 130) == 3){
                Message_Who(0);
                Message_MsgDisp("主人公", "Umm... how was it?");
                Voice_PlayVoice("H5C05000_E03500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "They say that the taste of a\nperson's household shows in their\ncurry...");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H5C05000_E03600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "But is putting in medical herbs, and\nnot spices, into curry popular at\nyour place?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Medical herbs!?");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H5C05000_E03700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It's my first time eating such\nbitter curry.\nI'm really refreshed.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I messed up!\nSorry, ｛Chris＊＊｝...)");
                }
            else {
                Voice_PlayVoice("H5C05000_E03800", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Thanks for the food...");
                Message_Who(0);
                Message_MsgDisp("主人公", "... How was it?");
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("H5C05000_E03900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "...\nIf people won't eat it, tell me\nright away.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H5C05000_E04000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I'll be responsible for it and eat\nit all.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... So it wasn't nice...\nSorry, ｛Chris＊＊｝...)");
                }
            Parameter_AddCh1Param(5, 61, #3);
            }
        break ;
        case 2:
        Message_Who(0);
        Message_MsgDisp("主人公", "Alright!\nI'll take on the Pu pat pong curry!");
        Message_CloseMsg();
        Screen_WipeOut(2);
        if (Parameter_GetCh1Param(5, 130) <= 2){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_05_000_D02", 127, 40);
            Voice_PlayVoice("H5C05000_E04100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You've worked hard.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.\nYou've worked hard.");
            Voice_PlayVoice("H5C05000_E04200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I'm hungry...\nSomething smells nice... Wow.\nIs this what we're having?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah.");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("H5C05000_E04300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It looks elaborate. What did you do?");
            Message_Who(0);
            Message_MsgDisp("主人公", "I kind of gave it my all....\nAnyway, will you try some?");
            }
        else if (Parameter_GetCh1Param(5, 130) == 3){
            Character_ChFace(0, 0, 11);
            Character_Chara_GS2(5, "M5_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_05_000_D02", 127, 40);
            Voice_PlayVoice("H5C05000_E04400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Wow.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.");
            Character_BlinkStart(5, 2, (#1));
            Voice_PlayVoice("H5C05000_E04500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It's wonderful that we'll be having\nthis at camp.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Haha, I did my best.");
            Character_ChFace(0, 0, 3);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H5C05000_E04600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I'm actually looking forward to your\nhomemade food.\nI want to eat it!");
            Message_Who(0);
            Message_MsgDisp("主人公", "It would be nice if this suits your\ntastes.\nPlease eat!");
            }
        else {
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(5, "M5_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_05_000_D02", 127, 40);
            Voice_PlayVoice("H5C05000_E04700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ah!\nHey, this is pu pat pong curry,\nright?");
            Message_Who(0);
            Message_MsgDisp("主人公", "You know of it?");
            Voice_PlayVoice("H5C05000_E04800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah.\nBut when I went to Thailand, I\ndidn't eat it.");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H5C05000_E04900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It was really yummy.\nI'm glad that I can eat your version\nof it...");
            Message_Who(0);
            Message_MsgDisp("主人公", "It would be nice if this suits your\ntastes.\nPlease eat!");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        if (Parameter_GetPl1Param(20) >= 80){
            Character_ChFace(0, 0, 10);
            if (Parameter_GetCh1Param(5, 130) <= 2){
                Message_Who(0);
                Message_MsgDisp("主人公", "How was the flavor?");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H5C05000_E05000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It was yummy～.");
                Voice_PlayVoice("H5C05000_E05100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It was so amazing that it makes me\nwonder if you practiced cooking to\nmake nice food for everyone at the\ncamp.");
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("H5C05000_E05200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Thanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nI'm glad I tried my best at making\nit.)");
                }
            else if (Parameter_GetCh1Param(5, 130) == 3){
                Voice_PlayVoice("H5C05000_E05300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Thanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "How was it?");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H5C05000_E05400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It was so yummy that it makes me\nwant to go to Thailand to eat the\nauthentic dish.");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("H5C05000_E05500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Thanks for letting me eat something\nnice.\nI want to ask you to make food\nagain.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'm glad I tried my best at making\nit!)");
                }
            else {
                Message_Who(0);
                Message_MsgDisp("主人公", "Umm... how was it?");
                Voice_PlayVoice("H5C05000_E05600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Hmm... This is bad...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H5C05000_E05700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I don't want to let anyone else eat\nsomething as yummy as this...\nAh!");
                Character_ChFace(0, 0, 11);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("H5C05000_E05800", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "More, please!\nI want all that's left over!");
                Message_Who(0);
                Message_MsgDisp("主人公", "A-All!?");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 0);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("H5C05000_E05900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Yeah. I want to have it all.\nHurry▼");
                Message_Who(0);
                Message_MsgDisp("主人公", "(He is this happy with the food!\nI'm glad I put my all into making\nit!)");
                }
            Parameter_AddCh1Param(5, 61, 5);
            }
        else {
            if (Parameter_GetCh1Param(5, 130) <= 2){
                Character_ChFace(0, 0, 9);
                Message_Who(0);
                Message_MsgDisp("主人公", "How was it?");
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("H5C05000_E06000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "*Hiccup*");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh!?");
                Voice_PlayVoice("H5C05000_E06100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I can't stop hiccupping.\n*Hiccup*");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("H5C05000_E06200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I wonder why...\nIs it because the crab was\nundercooked?\nOr...\nwas it because there was too much\noil?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ugh...");
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("H5C05000_E06300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "*Hiccup*");
                Message_Who(0);
                Message_MsgDisp("主人公", "(It looks like I stuffed up...\nI have to try harder...)");
                }
            else if (Parameter_GetCh1Param(5, 130) == 3){
                Message_Who(0);
                Message_MsgDisp("主人公", "Umm... how was it?");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("H5C05000_E06400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Hey, what are the ingredients in\nthis dish?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ehh... It's mainly crab.\nI also put beaten egg into it.");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("H5C05000_E06500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I see...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Why?");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(5, 0, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("H5C05000_E06600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Hmm...\nI was wondering if you were planning\nto make something else by putting\nthose two things together...");
                Voice_PlayVoice("H5C05000_E06700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It had a very strange taste.\nSomething that can't be expressed.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Strange, meaning that I stuffed up\nbig time...\nSorry, ｛Chris＊＊｝...)");
                }
            else {
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("H5C05000_E06800", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It's cohere that I didn't eat Thai\nfood...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Cohere... Cohere? Do you mean clear?");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("H5C05000_E06900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Ah, yeah.");
                Voice_PlayVoice("H5C05000_E07000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Maybe... Just maybe.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Y-Yeah?");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("H5C05000_E07100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "There are a lot of people who can't\nunderstand what they ate today.");
                Voice_PlayVoice("H5C05000_E07200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "So if there are people who hesitate\nfrom eating your cooking, call me\nright away.");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H5C05000_E07300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Because I'll eat it all. Okay?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... So it wasn't nice...\nSorry, ｛Chris＊＊｝...)");
                }
            Parameter_AddCh1Param(5, 61, 5);
            }
        break ;
        }
    }
