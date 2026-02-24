section "o03_m4_000"{
    int var0 = 0;
    var0 = Parameter_GetPl1Param(40);
    if (var0 == 1){
        if (Parameter_GetCh1Param(4, 130) < 3){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("O0304000_D00000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Running with you gets me 1st\nplace...\nYou're a godsend!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay! It was worth doing my best!)");
            }
        else if (Parameter_GetCh1Param(4, 130) == 3){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("O0304000_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Alright, 1st place!\nIt's only natural, only natural!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay! It was worth doing my best!)");
            }
        else {
            Character_ChFace(0, 3, 3);
            Character_BlinkStart(4, 2, (#1));
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("O0304000_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Together in 1st place, huh...\nWell, even if I hated it, we'd still\nget 1st place since we work so well\ntogether!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay～! It was worth doing my best!)");
            }
        }
    else if (var0 == 2){
        if (Parameter_GetCh1Param(4, 130) < 3){
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("O0304000_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "If you were a little more...\nWell, it's harsh to ask of anything\nmore.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... We were so close, too.)");
            }
        else if (Parameter_GetCh1Param(4, 130) == 3){
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("O0304000_D00400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "It's annoying, but 2nd place is\nfine.\nIt was annoying, though!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... It was unfortunate.\nAll it would have taken was a little\nmore effort, as well.)");
            }
        else {
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 1);
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("O0304000_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Ah, I wanted to win 1st place with\nyou～.\nLet's do it, again～!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(We were so close, too......\nHow unfortunate!)");
            }
        }
    else if (var0 == 3){
        if (Parameter_GetCh1Param(4, 130) < 3){
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("O0304000_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You're... quite slow.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh, maybe I should have tried a\nlittle harder...)");
            }
        else if (Parameter_GetCh1Param(4, 130) == 3){
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(4, 3, (#1));
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("O0304000_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "3rd place...\nIt's only better than not being\nlast.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh, maybe I should have tried a\nlittle harder...)");
            }
        else {
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(4, 3, (#1));
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("O0304000_D00800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "We might have lost because I didn't\nthink about your pace～.\nSorry.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I should have tried harder...)");
            }
        }
    else {
        if (Parameter_GetCh1Param(4, 130) < 3){
            Character_ChFace(0, 0, 8);
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("O0304000_D00900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "How dare you put a blemish on my\nradiant past...!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I have no words...)");
            }
        else if (Parameter_GetCh1Param(4, 130) == 3){
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("O0304000_D01000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Last place...\nWe're seriously in last place...\n*Sigh*");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... How pathetic...)");
            }
        else {
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("O0304000_D01100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Even though we came last, it's fine!\nThis way, it will be more memorable!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm～... I feel like crying...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(4, 86, 1);
    }
