section "h4a_m1_000"{
    if (Parameter_GetCh1Param(2, 25) == 1){
        if (Parameter_GetBkParam(4, 52) >= 320){
            if (Parameter_GetCh1Param(1, 130) >= 4){
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Character_Chara_GS2(1, "M1_01F", 0);
                Background_Bg_GS2("BG_SCA12_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("H4A01000_A00200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "... They won the championships.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, they won!\nIt's because the players did their\nbest!");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 0);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("H4A01000_A00300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "... You're wrong.\nYou're supporting the players.\nThat's why everyone is doing their\nbest, right?");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(1, 0, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H4A01000_A00400", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "And...\nEveryone knows that fact, more than\nyou know it.");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("H4A01000_A00500", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "You...\nreally worked hard cheering, right?\nYou've worked hard....\nCongratulations.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'm glad I joined the Cheerleading\nClub...\nThis is the best day!)");
                }
            }
        else {
            if (Parameter_GetCh1Param(1, 130) >= 4){
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 5);
                Character_Chara_GS2(1, "M1_01F", 0);
                Background_Bg_GS2("BG_SCA12_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("H4A01000_A00900", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "... They lost.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Yeah.");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(1, 0, (#1));
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("H4A01000_A01000", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "But your cheerleading really\nmotivated the players....\nIsn't that right?");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(1, 0, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H4A01000_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "And...\nEveryone knows that fact, more than\nyou know it.");
                Character_ChFace(0, 0, 8);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("H4A01000_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "...\nIf there are people who say that\nthey don't know that, I'm gonna tell\nthem off!");
                Character_ChFace(0, 0, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("H4A01000_A01300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "... You've worked hard up until now.\nYou really did your best too, right?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Right...\nI didn't do anything to regret in\nthe Cheerleading Club.)");
                }
            }
        }
    else {
        if (Parameter_GetBkParam(4, 52) >= 320){
            if (Parameter_GetCh1Param(1, 130) >= 4){
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 0);
                Character_Chara_GS2(1, "M1_01F", 0);
                Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("H4A01000_A01600", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "... They won the championships.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, they won!\nEveryone was amazing!");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 0);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("H4A01000_A01700", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "... You're wrong.\nIt's because you put in the effort.\nThat's why there were results....\nRight?");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(1, 0, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H4A01000_A01800", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "And...\nEveryone knows that fact, more than\nyou know it.");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("H4A01000_A01900", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "You...\nreally worked hard cheering, right?\nYou've worked hard....\nCongratulations.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'm glad I joined the Cheerleading\nClub...\nThis is the best day!)");
                }
            }
        else {
            if (Parameter_GetCh1Param(1, 130) >= 4){
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 5);
                Character_Chara_GS2(1, "M1_01F", 0);
                Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("H4A01000_A02300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "... They lost.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Yeah.");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(1, 0, (#1));
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("H4A01000_A02400", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "But your cheerleading really\nmotivated the players....\nIsn't that right?");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(1, 0, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H4A01000_A02500", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "And...\nEveryone knows that fact, more than\nyou know it.");
                Character_ChFace(0, 0, 8);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("H4A01000_A02600", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "...\nIf there are people who say that\nthey don't know that, I'm gonna tell\nthem off!");
                Character_ChFace(0, 0, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("H4A01000_A02700", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "... You've worked hard up until now.\nYou really did your best too, right?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Right...\nI didn't do anything to regret in\nthe Cheerleading Club.)");
                }
            }
        }
    Parameter_AddCh1Param(1, 86, 1);
    }
