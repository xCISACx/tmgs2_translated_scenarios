section "h46_m8_000"{
    int var0 = 0;
    if (Parameter_GetCh1Param(2, 25) == 1){
        var0 = Parameter_Rensyu_aft();
        if (var0 < 4){
            if (Parameter_GetCh1Param(8, 130) < 4){
                Character_Chara_GS2(8, "M8_01F", 0);
                }
            else {
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(8, "M8_??F", 0);
                }
            if (Parameter_GetCh1Param(8, 130) < 4){
                Voice_PlayVoice("H4608000_H00000", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "The cheerleading was awesome.");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H4608000_H00100", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "I actually feel like cheering you\nguys on more than the players.");
                Message_Who(0);
                Message_MsgDisp("主人公", "I'm glad if you think that way!");
                Voice_PlayVoice("H4608000_H00200", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "You worked hard!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(It was worth putting my all into\ncheering...!)");
                }
            else {
                Voice_PlayVoice("H4608000_H00300", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "They won.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yes! I am glad!");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H4608000_H00400", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "...\nThose guys would surely wanna do\ntheir best to see that smile.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Is that... so?");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("H4608000_H00500", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "I'd...\nprobably think that if I were in the\nBaseball Club....\nMaybe.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Just maybe?");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4608000_H00600", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "That smile usually gets me...\nIf you cheered for me, I'd probably\nbe trounced.");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(8, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("H4608000_H00700", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "... Is \"trounced\" an obsolete word?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Haha. But I'm glad.\nThank you very much!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'm glad I tried my best\ncheering...!)");
                }
            }
        else {
            if (Parameter_GetCh1Param(8, 130) < 4){
                Character_ChFace(0, 0, 9);
                Character_Chara_GS2(8, "M8_01F", 0);
                }
            else {
                Character_ChFace(0, 0, 9);
                Character_Chara_GS2(8, "M8_??F", 0);
                }
            if (Parameter_GetCh1Param(8, 130) < 4){
                Voice_PlayVoice("H4608000_H00800", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Ah... bad luck. They lost.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Everyone in the Baseball Club\nprobably feels annoyed...");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4608000_H00900", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Right..\nBut the cheering was spot on.");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("H4608000_H01000", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "I think that it was enough.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I have to try harder next time!)");
                }
            else {
                Voice_PlayVoice("H4608000_H01100", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Bad luck.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yes...\nEveryone tried their best, too...");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("H4608000_H01200", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Rather than winning or losing, it's\nabout substance, right?\nIsn't that what practice games are\nfor?");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Masaki＊＊｝...");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4608000_H01300", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "There's still time to practice for\nthe real games.\nThose guys and you guys, too.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... You're right.");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("H4608000_H01400", 8, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "What's gonna happen if the\ncheerleaders are this depressed!?\nChin up, ｛主人公｝.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Yes!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(...\nYeah, I will do my best so they can\nwin next time!)");
                }
            }
        }
    else {
        var0 = Parameter_Rensyu_aft();
        if (var0 < 4){
            if (Parameter_GetCh1Param(8, 130) < 4){
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 2);
                Character_Chara_GS2(8, "M8_01F", 0);
                }
            else {
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(8, "M8_??F", 0);
                }
            if (Parameter_GetCh1Param(8, 130) < 4){
                Voice_PlayVoice("H4608000_H01500", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "... Huh?\nWhat place did Hanegasaki come?");
                Message_Who(0);
                Message_MsgDisp("主人公", "1st! Were you not watching?");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4608000_H01600", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Well, I was supposed to...\nHaha, sorry, I missed it.\nWell, I'm glad they won.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'm glad I tried my best\ncheering...!)");
                }
            else {
                Voice_PlayVoice("H4608000_H01700", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "That was good!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yes!\nWe were passionate about the\ncheering, too!");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(8, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("H4608000_H01800", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "I also felt stronger watching you\nguys.\nThe power of cheering is amazing...");
                Message_Who(0);
                Message_MsgDisp("主人公", "I'm glad you think so...");
                Character_ChFace(0, 4, 0);
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H4608000_H01900", 8, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "You did your best,\n｛主人公｝.");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4608000_H02000", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "You've worked hard!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'm glad I tried my best\ncheering...!)");
                }
            }
        else {
            if (Parameter_GetCh1Param(8, 130) < 4){
                Character_ChFace(0, 0, 9);
                Character_Chara_GS2(8, "M8_01F", 0);
                }
            else {
                Character_ChFace(0, 0, 9);
                Character_Chara_GS2(8, "M8_??F", 0);
                }
            if (Parameter_GetCh1Param(8, 130) < 4){
                Voice_PlayVoice("H4608000_H02100", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Argh, they lost...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yes... It was close, though.");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H4608000_H02200", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Don't be so down.\nThere's still time left until the\nreal competition, right?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yes.");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4608000_H02300", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "You shouldn't be down today, you\nshould be reflecting.\nThose guys are already thinking\nabout the next game.");
                Character_ChFace(0, 2, 0);
                Voice_PlayVoice("H4608000_H02400", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "And cheering them on with that is\nalso a part of your job.\nChin up!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Right...\nI must do my best for next time.)");
                }
            else {
                Voice_PlayVoice("H4608000_H02500", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "It was close...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yes... It is unfortunate.");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("H4608000_H02600", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "...\nYou were kinda down in the middle of\nthe race.");
                Message_Who(0);
                Message_MsgDisp("主人公", ".........");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4608000_H02700", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "I'm not blaming you, okay?\nI'm saying that there are things you\ngotta do for the real thing.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Masaki＊＊｝...");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 3);
                Character_BlinkStart(8, 3, (#1));
                Voice_PlayVoice("H4608000_H02800", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "The power of cheering is really\namazing.");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("H4608000_H02900", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "You should also do your best so that\nyou'll be able to cheer from start\nto finish at the real races.");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(8, 2, (#1));
                Voice_PlayVoice("H4608000_H03000", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "I'll also be cheering.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Yes.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Right...\nI have to try harder with practice!)");
                }
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(8, 86, 1);
    }
