section "o02_m6_000"{
    int var0 = 0;
    var0 = Parameter_GetPl1Param(40);
    if (var0 == 1){
        if (Parameter_GetCh1Param(6, 130) < 3){
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("O0206000_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Congratulations!\n1st place is amazing.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nIt was worth having done my best!)");
            }
        else if (Parameter_GetCh1Param(6, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("O0206000_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "1st place.\nAren't you gunning for it, Senpai!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it! I really tried my best.)");
            }
        else {
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("O0206000_F00200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "1st place!? We did it, Senpai! ...\nI see you in a new light.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay～! I did my best!)");
            }
        }
    else if (var0 == 2){
        if (Parameter_GetCh1Param(6, 130) < 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("O0206000_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It's disappointing.\nWe almost got 1st place.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Just a little more...)");
            }
        else if (Parameter_GetCh1Param(6, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("O0206000_F00400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "2nd place. Well, it's halfway...\nWere you not trying your best?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(We was so close...)");
            }
        else {
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 1);
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("O0206000_F00500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Not being able to get 1st place\nseems like something you'd do,\nSenpai.");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("O0206000_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "You tried your best, is that not\ngood?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nI'm disappointed and tried my best,\nbut I was so close...)");
            }
        }
    else if (var0 == 3){
        if (Parameter_GetCh1Param(6, 130) < 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("O0206000_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "You worked hard.\nYou did your best, Senpai.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Well, that's that.)");
            }
        else if (Parameter_GetCh1Param(6, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("O0206000_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "3rd place. Well, it's not that bad.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Well, that's that.)");
            }
        else {
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 1);
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("O0206000_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "3rd place?\nWell, was it hard to keep up?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I should have tried harder...)");
            }
        }
    else {
        if (Parameter_GetCh1Param(6, 130) < 3){
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("O0206000_F01000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Did Senpai not do her best?\nThere was no luck this time.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Aah, I am totally ashamed...)");
            }
        else if (Parameter_GetCh1Param(6, 130) == 3){
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("O0206000_F01100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ahahaha! Last place is great!\nFrom the bottom it counts as 1st\nplace.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...)");
            }
        else {
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 1);
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("O0206000_F01200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "You know, we can't do much without\nsome help.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Pathetic...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(6, 86, 1);
    }
