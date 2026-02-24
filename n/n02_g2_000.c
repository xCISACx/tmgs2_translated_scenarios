section "n02_g2_000"{
    if (Parameter_Test_Check() == 0){
        if (Parameter_GetCh1Param(11, 513) != 1){
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(11, "G2_01F", 0);
            Voice_PlayVoice("", #1, "N0211000_K00000");
            Message_Who(11);
            Message_MsgDisp("Onoda", "｛主人公｝, top rank.\nCongratulations.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Onoda＊＊｝!\nThank you! ... Umm, what's wrong?");
            Character_BlinkStart(11, 2, (#1));
            Voice_PlayVoice("N0211000_K00100", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "Nothing much.\nBut next time, I'm not giving up!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(She hates to lose when it comes to\nstudying...\nEven so, 1st rank in the school!\nIt was worth trying my best!)");
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(11, "G2_01F", 0);
            Voice_PlayVoice("N0211000_K00200", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "... As expected.\nAs a rival, I'm challenged, too.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Onoda＊＊｝.");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(11, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("N0211000_K00300", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "Congratulations. However!\nIt will not last long!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm not giving up either!)");
            }
        }
    else if (Parameter_Test_Check() == 1){
        if (Parameter_GetCh1Param(11, 513) != 1){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(11, "G2_01F", 0);
            Voice_PlayVoice("", #1, "N0211000_K00400");
            Message_Who(11);
            Message_MsgDisp("Onoda", "｛主人公｝.\nYou got quite a good rank this time.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Onoda＊＊｝.");
            Character_BlinkStart(11, 2, (#1));
            Voice_PlayVoice("N0211000_K00500", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "But it is going to be tough from\nhere.\nA half-done effort will not be\nenough.\nSo let's try our best together!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Okay, let's try harder!)");
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(11, "G2_01F", 0);
            Voice_PlayVoice("N0211000_K00600", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "...\nLet's just say it was a good result.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Onoda＊＊｝.");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("N0211000_K00700", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "... I have a competitor, too.\nI will be waiting on our next\nchallenge!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nNext time, I'll aim a little\nhigher!)");
            }
        }
    else if (Parameter_Test_Check() == 2){
        if (Parameter_GetCh1Param(11, 513) != 1){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(11, "G2_01F", 0);
            Voice_PlayVoice("", #1, "N0211000_K00800");
            Message_Who(11);
            Message_MsgDisp("Onoda", "｛主人公｝.\nI'd say it's not good, but not bad\neither.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Onoda＊＊｝.");
            Character_BlinkStart(11, 2, (#1));
            Voice_PlayVoice("N0211000_K00900", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "Surely you've hit a wall.\nIt happens quite often with\nstudying.\nWith great effort, never give up!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I have to try harder...)");
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(11, "G2_01F", 0);
            Voice_PlayVoice("N0211000_K01000", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "What's with these results?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(11, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("N0211000_K01100", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "As your rival, please be a little\nmindful.\nI've lost a competitor.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nI'm not going to lose next time!)");
            }
        }
    else if (Parameter_Test_Check() >= 3){
        if (Parameter_GetCh1Param(11, 513) != 1){
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            Character_Chara_GS2(11, "G2_01F", 0);
            Voice_PlayVoice("", #1, "N0211000_K01200");
            Message_Who(11);
            Message_MsgDisp("Onoda", "｛主人公｝. What's wrong?\nAre you not feeling well?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Umm, it's nothing like that...");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("N0211000_K01300", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "Well, if you run away with this, all\nof your efforts will come be\nnothing.\nI'm going to help, too. All right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah!\nI don't need to feel blue about it!)");
            if (Parameter_Test_Check() == 4){
                Character_Chara_GS2(11, "NON");
                }
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(11, "G2_01F", 0);
            Voice_PlayVoice("N0211000_K01400", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "......");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Onoda＊＊｝.");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(11, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("N0211000_K01500", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "You are hopeless now.\nIn other words, you are backing out\nfrom our rivalry deal...\nI am not stepping down, though.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(As if I'm giving up!\nI must try harder next time...)");
            if (Parameter_Test_Check() == 4){
                Character_Chara_GS2(11, "NON");
                }
            }
        }
    Parameter_AddCh1Param(11, 86, 1);
    }
