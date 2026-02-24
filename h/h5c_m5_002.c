section "h5c_m5_002"{
    Background_Bg_GS2("BG_SC710_SU_1", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "It's my turn to make food today.\nSo, what should I make...");
    Message_MsgSel("Canned yakitori.", "Special chicken and egg on rice.", "Stuffed chicken wing tips.");
    switch (Message_TextSelect()){
        case 0:
        Message_Who(0);
        Message_MsgDisp("主人公", "Hmm...\nIt's bothersome, so I'll just make\ncanned yakitori.");
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
            Character_BlinkStart(5, 3, (#1));
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
        Message_MsgDisp("主人公", "Alright, I'll make special chicken\nand egg on rice!");
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
            Character_ChFace(0, 2, 2);
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
                Message_MsgDisp("Chris", "Hah～, I ate quite a lot.\nI might have been okay eating a\nthird helping～.");
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
                Message_MsgDisp("Chris", "I'm really happy that I could eat\nyour homemade food.\nThanks, ｛主人公｝.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yay!\nIt seems like it was really yummy!)");
                }
            Parameter_AddCh1Param(5, 61, 3);
            }
        else {
            Character_ChFace(0, 0, 9);
            if (Parameter_GetCh1Param(5, 130) <= 2){
                Message_Who(0);
                Message_MsgDisp("主人公", "... How was it?");
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("H5C05000_E07400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... Hah!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh!?");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("H5C05000_E07500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "For a moment, I saw a flower\nfield...\nMaybe it was my imagination...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice...\nSorry, ｛Chris＊＊｝...)");
                }
            else if (Parameter_GetCh1Param(5, 130) == 3){
                Message_Who(0);
                Message_MsgDisp("主人公", "... How was it?");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 2);
                Message_Who(5);
                Message_MsgDisp("Chris", ".........");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Chris＊＊｝...?");
                Character_ChFace(0, 0, 9);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("H5C05000_E07700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... Ugh... I... I swallowed it all!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice...\nSorry, ｛Chris＊＊｝...)");
                }
            else {
                Message_Who(0);
                Message_MsgDisp("主人公", "... How was it?");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("H5C05000_E07800", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I'm just glad knowing that you\nwanted to let us eat amazing food.");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("H5C05000_E07900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "To me, that has real meaning.");
                Message_Who(0);
                Message_MsgDisp("主人公", "T-Thanks... So, the flavor...");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("H5C05000_E08000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "My impressions are my things.\nSo I have to keep it a secret from\nyou, too.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... It probably wasn't nice...\nSorry, ｛Chris＊＊｝...)");
                }
            Parameter_AddCh1Param(5, 61, #3);
            }
        break ;
        case 2:
        Message_Who(0);
        Message_MsgDisp("主人公", "Alright!\nI'll take on the stuffed chicken\nwing tips.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        if (Parameter_GetCh1Param(5, 130) <= 2){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_05_000_D02", 127, 40);
            Voice_PlayVoice("H5C05000_E08100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You've worked hard.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.\nYou've worked hard.");
            Voice_PlayVoice("H5C05000_E08200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I'm hungry...\nSomething smells nice... Wow.\nIs this what we're having?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah.");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("H5C05000_E08300", #1, "");
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
            Voice_PlayVoice("H5C05000_E08400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Oh, you're in charge of making food\ntoday?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, that's right.");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("H5C05000_E08500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It's like you're unveiling a hidden\nskill.\nWow, it's wonderful that we'll be\nhaving this at camp.");
            Character_ChFace(0, 0, 4);
            Voice_PlayVoice("H5C05000_E08600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Is there a person you want to eat\nyour food?\nI'm kinda jealous～.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Haha. Please eat.");
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_05_000_D02", 127, 40);
            Voice_PlayVoice("", 5, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H5C05000_E08700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "So you were in charge of making food\ntoday.\nI'm expecting a lot.... Wow.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Hm?");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("H5C05000_E08800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It looks pretty.\nIt's kinda a waste to be eating it～.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Haha. Please eat.");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        if (Parameter_GetPl1Param(20) >= 80){
            Character_ChFace(0, 0, 10);
            if (Parameter_GetCh1Param(5, 130) <= 2){
                Character_ChFace(0, 0, 3);
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("H5C05000_E08900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Thanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "How was the flavor?");
                Character_ChFace(0, 0, 10);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H5C05000_E09000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It was yummy～.\nYour cooking skill is amazing, too.");
                Voice_PlayVoice("H5C05000_E09100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Everyone is really satisfied that\nthere is yummy food at this camp～.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nI'm glad I tried my best at making\nit!)");
                }
            else if (Parameter_GetCh1Param(5, 130) == 3){
                Character_ChFace(0, 0, 3);
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("H5C05000_E09200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Thanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "How was it?");
                Character_BlinkStart(5, 0, (#1));
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H5C05000_E09300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "The sauce was amazing～.\nThe chicken was perfectly rooked.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Rooked...? You mean \"cooked\"?");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("H5C05000_E09400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Ah, yeah.");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(5, 2, (#1));
                Voice_PlayVoice("H5C05000_E09500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Thanks for letting me eat something\nnice.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'm glad I tried my best at making\nit!)");
                }
            else {
                Message_Who(0);
                Message_MsgDisp("主人公", "How was the flavor?");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H5C05000_E09600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... I haven't eaten yet.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh! Did it not suit your tastes...?");
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("H5C05000_E09700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "No.\nIt would be a waste to eat it all.");
                Character_BlinkStart(5, 0, (#1));
                Voice_PlayVoice("H5C05000_E09800", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Ah, right.\nI'll treasure this as I eat it.\nBring me some cling film so I can\npreserve it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "You don't have to go that far...\nI'll just make it again for you.");
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("H5C05000_E09900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "For real?\nWhen we get home from camp?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Y-Yeah.");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H5C05000_E10000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Yay. It's a promise.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(He is this happy with the food!\nI'm glad I put my all into making\nit!)");
                }
            Parameter_AddCh1Param(5, 61, 5);
            }
        else {
            Character_ChFace(0, 0, 9);
            if (Parameter_GetCh1Param(5, 130) <= 2){
                Message_Who(0);
                Message_MsgDisp("主人公", "... How was it?");
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("H5C05000_E10100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It's my first time eating food that\ntastes this different to how it\nlooks.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh!?");
                Voice_PlayVoice("H5C05000_E10200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It's a unique taste, so this in its\nown right should be given its own\ncategory.");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("H5C05000_E10300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "What should it be called? Hmm...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I made him worry...\nSorry, ｛Chris＊＊｝...)");
                }
            else if (Parameter_GetCh1Param(5, 130) == 3){
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("H5C05000_E10400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Thanks for the food...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Umm... how was it?");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H5C05000_E10500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Praise her, praise her.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("H5C05000_E10600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Look, my bowl is clean.\nI ate it all.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... So it wasn't nice...\nSorry...)");
                }
            else {
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("H5C05000_E10700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Thanks for the food...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Umm... how was it?");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("H5C05000_E10800", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "That was stuffed chicken wing tips,\nright?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Y-Yeah...\nThat's what it was supposed to be...");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("H5C05000_E10900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I wonder...\nIt's different to the ones I've\neaten before.");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("H5C05000_E11000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I wonder what's with that natto kind\nof flavor that it leaves in your\nmouth.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Natto!?");
                Character_BlinkStart(5, 0, (#1));
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H5C05000_E11100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "That's what it tasted like.\nIt might be impossible to make it,\nbut make it, again.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Hmm...\n｛Chris＊＊｝ isn't forcing\nhimself to eat it, right?)");
                }
            Parameter_AddCh1Param(5, 61, 5);
            }
        break ;
        }
    }
