section "h46_m7_000"{
    int var0 = 0;
    if (Parameter_GetCh1Param(2, 25) == 1){
        var0 = Parameter_Rensyu_aft();
        if (var0 < 4){
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(7, "M7_01F", 0);
            if (Parameter_GetCh1Param(7, 130) <= 3){
                Voice_PlayVoice("H4607000_G00000", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "The Baseball Club has won.\nThe Cheerleading Club has also\nworked hard.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you very much,\n｛Wakaouji＊＊｝!");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H4607000_G00100", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "I am glad that I could watch a good\ngame.\nThe cheerleaders were also in\nunison.\nIt was enjoyable.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah, it was worth putting my all\ninto cheering!)");
                }
            else {
                Voice_PlayVoice("H4607000_G00200", 7, "H4607000_G00201");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "The Baseball Club has won.\nYour cheering was also good,\n｛主人公｝.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you very much,\n｛Wakaouji＊＊｝!");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(7, 3, (#1));
                Voice_PlayVoice("H4607000_G00300", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "It was thanks to your cheering that\nthe Baseball Club could show their\ntrue strength.\nThey played well.");
                Character_BlinkStart(7, 2, (#1));
                Voice_PlayVoice("H4607000_G00400", 7, "H4607000_G00401");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "I also feel energetic now, so I will\ndo my best to write up teaching\nmaterials.\nYou have worked hard,\n｛主人公｝.");
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah, it was worth putting my all\ninto cheering!)");
                }
            }
        else {
            if (Parameter_GetCh1Param(7, 130) <= 3){
                Character_Chara_GS2(7, "M7_01F", 0);
                Voice_PlayVoice("H4607000_G00500", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "The game has ended.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yes, they lost...");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(7, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4607000_G00600", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "But it was an enjoyable match.\nYou created much laughter...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ugh...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I must rethink our routine...\nThat was unfortunate.)");
                }
            else {
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Character_Chara_GS2(7, "M7_01F", 0);
                Voice_PlayVoice("H4607000_G00700", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "They lost...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yes, it is unfortunate...");
                Voice_PlayVoice("H4607000_G00800", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "But the Baseball Club did their\nbest.\nThey will be able to make use of\nthis game next time, right?");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("H4607000_G00900", 7, "H4607000_G00901");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "You must also not lose.\nFight hard, ｛主人公｝.");
                Message_Who(0);
                Message_MsgDisp("主人公", "I will, ｛Wakaouji＊＊｝.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(It's annoying to lose...\nBut I will try hard to cheer next\ntime, too!)");
                }
            }
        }
    else {
        var0 = Parameter_Rensyu_aft();
        if (var0 < 4){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(7, "M7_17F", 0);
            if (Parameter_GetCh1Param(7, 130) <= 3){
                Voice_PlayVoice("H4607000_G01000", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "They won!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Isn't that great,\n｛Wakaouji＊＊｝!");
                Character_BlinkStart(7, 3, (#1));
                Voice_PlayVoice("H4607000_G01100", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Yes.\nThe athletes produced many good\nresults today.");
                Character_BlinkStart(7, 0, (#1));
                Voice_PlayVoice("H4607000_G01200", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Perhaps it is thanks to the\ncheerleaders.\nThank you.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah, it was worth putting my all\ninto cheering!)");
                }
            else {
                Voice_PlayVoice("", 7, "H4607000_G01300");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "｛主人公｝, did you see!\nWe won, we won.");
                Message_Who(0);
                Message_MsgDisp("主人公", "That's great, ｛Wakaouji＊＊｝!");
                Character_BlinkStart(7, 3, (#1));
                Voice_PlayVoice("H4607000_G01400", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Just as your promised, you also\ncheered on the way I advised people.\nThank you.");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(7, 0, (#1));
                Voice_PlayVoice("H4607000_G01500", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "We all gave it 120% today.\nIt was thanks to you cheerleaders.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah, it was worth putting my all\ninto cheering!)");
                }
            }
        else {
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            Character_Chara_GS2(7, "M7_17F", 0);
            if (Parameter_GetCh1Param(7, 130) <= 3){
                Voice_PlayVoice("H4607000_G01600", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "This is unfortunate.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Wakaouji＊＊｝...\nThat was bad luck.");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(7, 3, (#1));
                Voice_PlayVoice("H4607000_G01700", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Yes, we must go over this in the\nreview meeting.\nI am sorry that we lost, even though\nyou cheered for us.");
                Message_Who(0);
                Message_MsgDisp("主人公", "You don't have to be...\nPlease cheer up.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(It's annoying to lose...\nBut I will try hard to cheer next\ntime, too!)");
                }
            else {
                Voice_PlayVoice("", 7, "H4607000_G01800");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "｛主人公｝.\nI am sorry that we lost, even though\nyou cheered for us.");
                Message_Who(0);
                Message_MsgDisp("主人公", "You don't have to be...\nPlease cheer up,\n｛Wakaouji＊＊｝.");
                Character_ChFace(0, 4, 1);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4607000_G01900", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Ah, you are still cheering me on....\nAs expected of the Cheerleading\nClub.");
                Character_ChFace(0, 3, 3);
                Character_BlinkStart(7, 3, (#1));
                Voice_PlayVoice("H4607000_G02000", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "The athletes will feel better if\nthey heard you say that.\nJust like how I am now.");
                Voice_PlayVoice("H4607000_G02100", 7, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Thank you, ｛主人公｝.");
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(It's annoying to lose...\nBut I will try hard to cheer next\ntime, too!)");
                }
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(7, 86, 1);
    }
