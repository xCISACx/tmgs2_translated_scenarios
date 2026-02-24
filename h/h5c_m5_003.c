section "h5c_m5_003"{
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
            Message_MsgDisp("Chris", "... Do you feel unpleasant or bad?");
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
            Message_MsgDisp("主人公", "Umm... How was it?");
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
        Message_MsgDisp("主人公", "Alright, I'll make\n｛主人公名前｝'s special\nChinese stir fry!");
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
                Voice_PlayVoice("H5C05000_E11200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "All the girls in the Art Club are\ngood at cooking.");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H5C05000_E11300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It was yummy. Thanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Thank gosh. He ate it all!)");
                }
            else if (Parameter_GetCh1Param(5, 130) == 3){
                Voice_PlayVoice("H5C05000_E11400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Thanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "How was it?");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H5C05000_E11500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I wanted to eat more. Is there more?");
                Message_Who(0);
                Message_MsgDisp("主人公", "There is. Do you want to eat it?");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H5C05000_E11600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Yeah.\nQuickly▼");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'm glad I made proper food...)");
                }
            else {
                Message_Who(0);
                Message_MsgDisp("主人公", "How was it?");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H5C05000_E11700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It was very yummy!\nI'm full of happiness.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Really?");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H5C05000_E11800", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Yeah.\nI want to eat other things, too.\nHey, can I request something next\ntime?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yay!\nIt seems like it was really yummy!)");
                }
            Parameter_AddCh1Param(5, 61, 3);
            }
        else {
            Character_ChFace(0, 0, 9);
            if (Parameter_GetCh1Param(5, 130) <= 2){
                Message_Who(0);
                Message_MsgDisp("主人公", "How was it?");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("H5C05000_E11900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Bamboo shoots...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("H5C05000_E12000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "They were tough.\nIt got caught in between my teeth,\nso I can't remember the flavor...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I might have stuffed up...)");
                }
            else if (Parameter_GetCh1Param(5, 130) == 3){
                Message_Who(0);
                Message_MsgDisp("主人公", "Umm... how was it?");
                Character_ChFace(0, 0, 10);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("H5C05000_E12100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I kinda got this heaps good feeling\nhalf way through...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh!?");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H5C05000_E12200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "While eating your Chinese stir fry,\nI had a dream where I was chasing\nyou.");
                Character_BlinkStart(5, 0, (#1));
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("H5C05000_E12300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I heard someone say \"That's not the\nflavor of China's 4000 year\nhistory\".\nI wonder what that was.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(...\nWas he on the verge of fainting?\nSorry, ｛Chris＊＊｝...)");
                }
            else {
                Message_Who(0);
                Message_MsgDisp("主人公", "Umm... How was it?");
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("H5C05000_E12400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Let's try a little harder.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ugh...");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("H5C05000_E12500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "But you tried your very best.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("H5C05000_E12600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "The flavor depends on practice, but\nyour heart and your feelings don't,\nright?");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H5C05000_E12700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "The food was full of your feelings.\nThanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Chris＊＊｝...\nArgh, I should have tried harder...)");
                }
            Parameter_AddCh1Param(5, 61, #3);
            }
        break ;
        case 2:
        Message_Who(0);
        Message_MsgDisp("主人公", "Alright! I'll take on Ossobuco!");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(5, "M5_08F", 0);
        Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_05_000_D02", 127, 40);
        if (Parameter_GetCh1Param(5, 130) <= 2){
            Voice_PlayVoice("H5C05000_E12800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You've worked hard.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.\nYou've worked hard.");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("H5C05000_E12900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I'm hungry... Wow.\nIs this what we're having?\nIt looks elaborate. What did you do?");
            Message_Who(0);
            Message_MsgDisp("主人公", "I kind of gave it my all....\nAnyway, will you try some?");
            }
        else if (Parameter_GetCh1Param(5, 130) == 3){
            Voice_PlayVoice("H5C05000_E13000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You're in charge of making food\ntoday?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, that's right.");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("H5C05000_E13100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It's like you're unveiling a hidden\nskill.\nWow, it's wonderful that we'll be\nhaving this at camp.");
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H5C05000_E13200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Is there a person you want to eat\nyour food?\nI'm kinda jealous～.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Haha. Please eat.");
            }
        else {
            Voice_PlayVoice("", 5, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.");
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("H5C05000_E13300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "So you were in charge of making food\ntoday?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah. You remembered.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(5, 3, (#1));
            Voice_PlayVoice("H5C05000_E13400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Because it's the most special thing\non this camp.");
            Character_ChFace(0, 4, 1);
            Character_BlinkStart(5, 2, (#1));
            Voice_PlayVoice("H5C05000_E13500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Even if I said \"This is why I\ncame～\", it's not an exaggeration.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Haha. Please eat.");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        if (Parameter_GetPl1Param(20) >= 80){
            Character_ChFace(0, 0, 10);
            if (Parameter_GetCh1Param(5, 130) <= 2){
                Message_Who(0);
                Message_MsgDisp("主人公", "How was it?");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H5C05000_E13600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It seems like we might start a\ntradition of all girls in the Art\nClub being good at cooking.");
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("H5C05000_E13700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It was yummy～. Thanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'm glad he ate it all!)");
                }
            else if (Parameter_GetCh1Param(5, 130) == 3){
                Message_Who(0);
                Message_MsgDisp("主人公", "Umm... how was it?");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H5C05000_E13800", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "You looked so effortless while\ncooking.");
                Voice_PlayVoice("H5C05000_E13900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "You know that, right?\nYou wouldn't be able to make food\nlike this if you didn't.");
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H5C05000_E14000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It was yummy～. Thanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'm glad I tried my best at making\nit!)");
                }
            else {
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("H5C05000_E14100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "*Sigh*... It was yummy...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Really? Thank gosh.");
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H5C05000_E14200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I can relax now.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H5C05000_E14300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "...\nI don't want anyone else to eat your\nhomemade food anymore.");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H5C05000_E14400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Honestly, I want to eat all of the\nfood you made today.");
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("H5C05000_E14500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I'm relieved that this is the last\ncamp.\nThanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'm glad I put my all into making\nthe food...)");
                }
            Parameter_AddCh1Param(5, 61, 5);
            }
        else {
            Character_ChFace(0, 0, 9);
            if (Parameter_GetCh1Param(5, 130) <= 2){
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("H5C05000_E14600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Oh?");
                Message_Who(0);
                Message_MsgDisp("主人公", "What?");
                Character_BlinkStart(5, 2, (#1));
                Voice_PlayVoice("H5C05000_E14700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Can you heat this in the microwave\nfor me?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("H5C05000_E14800", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I don't like raw food...\nAh, 3 minutes is fine.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh...\nI should have tried harder...)");
                }
            else if (Parameter_GetCh1Param(5, 130) == 3){
                Message_Who(0);
                Message_MsgDisp("主人公", "How was it?");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H5C05000_E14900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I saw many things, just like a\nrevolving lectern.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Lectern...?");
                Character_ChFace(0, 0, 9);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H5C05000_E15000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Humans are like that, right?\nThey say that when they're exposed\nto danger, their life flashes before\nthem.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Do you perhaps mean...\na revolving lantern!?");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("H5C05000_E15100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Ah, yeah.");
                Voice_PlayVoice("H5C05000_E15200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I've remembered where I buried my\ntreasure when I was a kid.");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H5C05000_E15300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Thanks. Thanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh...\nSorry, ｛Chris＊＊｝...)");
                }
            else {
                Message_Who(0);
                Message_MsgDisp("主人公", "Umm... how was it?");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H5C05000_E15400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Yeah. It was the best in the world.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh... It was good?\nOr was it not good?");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H5C05000_E15500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Just by eating your homemade food, I\nget happy, so it tasted nice.");
                Voice_PlayVoice("H5C05000_E15600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Thanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Chris＊＊｝...\nArgh, I should have tried harder...)");
                }
            Parameter_AddCh1Param(5, 61, 5);
            }
        break ;
        }
    }
