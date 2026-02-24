section "o03_m1_000"{
    int var0 = 0;
    var0 = Parameter_GetPl1Param(40);
    if (var0 == 1){
        if (Parameter_GetCh1Param(1, 130) < 3){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(1, "M1_08F", 0);
            Voice_PlayVoice("O0301000_A00000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Great, 1st place!\nWell, are you going to thank me?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nIt was worth doing my best.)");
            }
        else if (Parameter_GetCh1Param(1, 130) == 3){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(1, "M1_08F", 0);
            Voice_PlayVoice("O0301000_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "We did it, 1st place!\nDid you do your best, also?\nI'll praise you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nIt was worth doing my best.)");
            }
        else {
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(1, "M1_08F", 0);
            Voice_PlayVoice("O0301000_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "We did it, 1st place!\nOh, were they easy victories for us?\nWe work great together!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nIt was worth doing my best.)");
            }
        }
    else if (var0 == 2){
        if (Parameter_GetCh1Param(1, 130) < 3){
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 3, (#1));
            Character_ChFace(0, 3, 1);
            Character_Chara_GS2(1, "M1_08F", 0);
            Voice_PlayVoice("O0301000_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "2nd place... Yeah! We are!\nIt's your fault!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Oh, how disappointing...\nJust a little more.)");
            }
        else if (Parameter_GetCh1Param(1, 130) == 3){
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 4);
            Character_Chara_GS2(1, "M1_08F", 0);
            Voice_PlayVoice("O0301000_A00400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Ah, 2nd place!\nWasn't your sprint at the end of the\nrace a little late?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nBut it was just a little more.)");
            }
        else {
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(1, 2, (#1));
            Character_Chara_GS2(1, "M1_08F", 0);
            Voice_PlayVoice("O0301000_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "2nd place... So close.\nDid you do your best, too?\nI'll praise you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nEven so, it was just a little\nmore...)");
            }
        }
    else if (var0 == 3){
        if (Parameter_GetCh1Param(1, 130) < 3){
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            Character_Chara_GS2(1, "M1_08F", 0);
            Voice_PlayVoice("O0301000_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "3rd place...\nIt's not my fault, is it?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Well, these kind of things happen.)");
            }
        else if (Parameter_GetCh1Param(1, 130) == 3){
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 3, (#1));
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(1, "M1_08F", 0);
            Voice_PlayVoice("O0301000_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "3rd place...\nHey, we're 3rd place, huh?\n*Sigh*...... We're in bad shape.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Well, these kind of things happen.)");
            }
        else {
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(1, "M1_08F", 0);
            Voice_PlayVoice("O0301000_A00800", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I'm sorry...\nI may have been running too fast.\nIs your foot okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm～...\nI should have tried a little\nharder...)");
            }
        }
    else {
        if (Parameter_GetCh1Param(1, 130) < 3){
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 3, (#1));
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(1, "M1_08F", 0);
            Voice_PlayVoice("O0301000_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "......... So, it's because of you?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh*... Pathetic.)");
            }
        else if (Parameter_GetCh1Param(1, 130) == 3){
            Character_ChFace(0, 0, 8);
            Character_Chara_GS2(1, "M1_08F", 0);
            Voice_PlayVoice("O0301000_A01000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Last place...\nThis will be a stain left on my\nhistory of sports...\nWhat do we do?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... How shocking.)");
            }
        else {
            Character_ChFace(0, 0, 9);
            Character_Chara_GS2(1, "M1_08F", 0);
            Voice_PlayVoice("O0301000_A01100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You know...\nWell, the place we were in...\nI'm happy with it.\nIn various ways...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh!\nI wish I had tried more harder...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(1, 86, 1);
    }
