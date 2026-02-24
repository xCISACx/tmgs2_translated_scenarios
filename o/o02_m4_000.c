section "o02_m4_000"{
    int var0 = 0;
    var0 = Parameter_GetPl1Param(40);
    if (var0 == 1){
        if (Parameter_GetCh1Param(4, 130) < 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("O0204000_D00000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "1st place?\nThat's something that would be a\nmerit to anyone～.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(It's the result of doing my best!)");
            }
        else if (Parameter_GetCh1Param(4, 130) == 3){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("O0204000_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Awesome, 1st place! Good job!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay! It was worth doing my best!)");
            }
        else {
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("O0204000_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You're awesome!");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("O0204000_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "But you were too fast.\nWhen you're with me, don't run at\nthat speed, okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm glad I did my best!)");
            }
        }
    else if (var0 == 2){
        if (Parameter_GetCh1Param(4, 130) < 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("O0204000_D00400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Ehh, 2nd place...\nSo, you're a fast runner.\nOr are you just average?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm... I was so close...)");
            }
        else if (Parameter_GetCh1Param(4, 130) == 3){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("O0204000_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You were so close!\nYou were a nose behind!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(It really is unfortunate.\nI was so close, too...)");
            }
        else {
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 5);
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("O0204000_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You were close!\nIt looked like you were gonna make\nit, too...\nBut 2nd place is still good. Yeah.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh, that was unfortunate...\nI was so close, too...)");
            }
        }
    else if (var0 == 3){
        if (Parameter_GetCh1Param(4, 130) < 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("O0204000_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Ah, well, that's how you are.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nI should have tried harder...)");
            }
        else if (Parameter_GetCh1Param(4, 130) == 3){
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("O0204000_D00800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Isn't it fine?\nYou weren't last, at least.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nI should have tried harder...)");
            }
        else {
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("O0204000_D00900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "It was a strange rank, but don't\nworry about it!\nOn that note, I'll do my best!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nI should have tried harder...)");
            }
        }
    else {
        if (Parameter_GetCh1Param(4, 130) < 3){
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("O0204000_D01000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Last place!? How uncool!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... How pathetic...)");
            }
        else if (Parameter_GetCh1Param(4, 130) == 3){
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(4, 3, (#1));
            Character_ChFace(0, 3, 4);
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("O0204000_D01100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "*Sigh*... That's so pathetic!\nIsn't it a result of you being\nhalf-assed?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I'm speechless...)");
            }
        else {
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("O0204000_D01200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Isn't it fine since it's the result\nof you doing your very best?\n... Don't be so down.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... How pathetic...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(4, 86, 1);
    }
