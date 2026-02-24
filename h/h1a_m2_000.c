section "h1a_m2_000"{
    if (Parameter_GetBkParam(1, 52) >= 320){
        if (Parameter_GetCh1Param(2, 25) != 1){
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(2, "M2_01F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Voice_PlayVoice("H1A02000_B00000", 2, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "You did it, ｛主人公｝.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah...! Everyone is amazing.\nBeing at the top of the nation...");
                Voice_PlayVoice("H1A02000_B00100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nYou're also the best manager in the\nnation too, right?");
                Character_ChFace(0, 0, 10);
                Message_Who(0);
                Message_MsgDisp("主人公", "As a manager...\nI didn't think about that...");
                Character_BlinkStart(2, 2, (#1));
                Character_BlinkStart(2, 0, (#1));
                Voice_PlayVoice("H1A02000_B00200", 2, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Right.\nYou should be more proud,\n｛主人公｝.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'm glad I continued being the\nBaseball Club's manager.\nToday is the best day!)");
                }
            else {
                Voice_PlayVoice("H1A02000_B00300", 2, "H1A02000_B00301");
                Message_Who(2);
                Message_MsgDisp("Shiba", "You did it, ｛主人公｝.\nCongratulations.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Thanks!\nI'm really happy, because everyone\ndid their best.");
                Character_ChFace(0, 0, 10);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("H1A02000_B00400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nI think your support also had\nsomething to do with the win.");
                Message_Who(0);
                Message_MsgDisp("主人公", "R-Really?\nI'm a little embarrassed...");
                Character_ChFace(0, 0, 3);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H1A02000_B00500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Isn't it strange, to think that\nthey're...\ndoing it for your sake.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H1A02000_B00600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Isn't it time you went back?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Y-Yeah!\nThanks, ｛Shiba＊＊｝!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'm really glad that I become the\nBaseball Club's manager!)");
                }
            }
        else {
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(2, "M2_15F", 0);
                Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(0);
                Message_MsgDisp("主人公", "Congratulations!\nYou did it, ｛Shiba＊＊｝!");
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("H1A02000_B00700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Ah. You worked hard.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah! Everyone did their best!\nI'm really happy!");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("H1A02000_B00800", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nYou also did your best too, right.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Shiba＊＊｝...");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H1A02000_B00900", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "This is the entire Baseball Club's\nwin.\nWe have to celebrate.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(To be able to win the\nchampionship...\nToday is the best day!)");
                }
            else {
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Character_Chara_GS2(2, "M2_15F", 0);
                Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("H1A02000_B01000", 2, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nThank you, ｛主人公｝.");
                Message_Who(0);
                Message_MsgDisp("主人公", "What's up with you all of a sudden?");
                Character_ChFace(0, 0, 10);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("H1A02000_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Because if you weren't here, we\nwouldn't have won.");
                Message_Who(0);
                Message_MsgDisp("主人公", "If you say that to me, then as a\nmanager, I can be proud.");
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("H1A02000_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Manager...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hmm?");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H1A02000_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Right.");
                Character_BlinkStart(2, 2, (#1));
                Character_BlinkStart(2, 0, (#1));
                Voice_PlayVoice("H1A02000_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Even as a manager, you were\nsupporting us.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Did you forget?");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H1A02000_B01500", 2, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "I was little mistaken....\nWe're forming a line.\nLet's go, ｛主人公｝.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Today is the best day.\nI'm glad I continued being the\nmanager!)");
                }
            }
        }
    else {
        if (Parameter_GetCh1Param(2, 25) != 1){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_01F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Voice_PlayVoice("H1A02000_B01600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... That was bad luck.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah. But everyone did their best...");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H1A02000_B01700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Even though it's painful...\nSupport them until the very end,\nokay?");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Yeah.\nThanks, ｛Shiba＊＊｝...");
                }
            else {
                Voice_PlayVoice("H1A02000_B01800", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... It was close.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Yeah.\nIt's really vexing, and\nunfortunate...\nBut I don't think it's something to\nregret.");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H1A02000_B01900", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... I see. You're a strong one.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("H1A02000_B02000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "It's amazing that you do what you\ncan until the very end, and you say\nthat you don't regret it.");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H1A02000_B02100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Rest up, today. Later.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Shiba＊＊｝... Thank you.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(It was unfortunate...\nBut I'm really glad I continued\nbeing the Baseball Club's manager!)");
                }
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_15F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Shiba＊＊｝, it was bad\nluck...");
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("", 2, "H1A02000_B02200");
                Message_Who(2);
                Message_MsgDisp("Shiba", "｛主人公｝....\nWhy are you making that face.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Because...");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("H1A02000_B02300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "It's vexing, but not regrettable.\nThis isn't the last stage.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Shiba＊＊｝...");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H1A02000_B02400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "So don't be so down.\nThere are still things to do.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Right.\nIt was unfortunate, but I have to do\nmy best until the very end.)");
                }
            else {
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Shiba＊＊｝... Umm...");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(2, 2, (#1));
                Character_BlinkStart(2, 0, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("", 2, "H1A02000_B02500");
                Message_Who(2);
                Message_MsgDisp("Shiba", "｛主人公｝....\nYou don't have to fuss over me.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, sorry...");
                Character_ChFace(0, 0, 9);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H1A02000_B02600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... No. I said it in a bad way.\nSorry.");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("H1A02000_B02700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "I meant that you don't have to force\nyourself.");
                Message_Who(0);
                Message_MsgDisp("主人公", "\"Force myself\"...");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H1A02000_B02800", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Everyone feels the same. So...\nYou don't have to force yourself to\nsmile today.");
                Character_ChFace(0, 0, 6);
                Character_BlinkStart(2, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H1A02000_B02900", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nAs long as you return to your normal\nself tomorrow.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Shiba＊＊｝...)");
                }
            }
        }
    Parameter_AddCh1Param(2, 86, 1);
    }
