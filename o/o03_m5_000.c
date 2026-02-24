section "o03_m5_000"{
    int var0 = 0;
    var0 = Parameter_GetPl1Param(40);
    if (var0 == 1){
        if (Parameter_GetCh1Param(5, 130) < 3){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(5, "M5_08F", 0);
            Voice_PlayVoice("O0305000_E00000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yay, we came first!\nWe were so in sync to the point that\neveryone was glaring at us▼");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay! It was worth doing my best!)");
            }
        else if (Parameter_GetCh1Param(5, 130) == 3){
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(5, 2, (#1));
            Character_Chara_GS2(5, "M5_08F", 0);
            Voice_PlayVoice("O0305000_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "We were in perfect sync.\nIt was only natural that we'd come\nfirst▼");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay! It was because I did my best!)");
            }
        else {
            Character_ChFace(0, 3, 3);
            Character_ChFace(0, 4, 1);
            Character_Chara_GS2(5, "M5_08F", 0);
            Voice_PlayVoice("O0305000_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I'm glad that we came first, but I\nkinda wanted to go slower to get to\nthe goal...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay, we came first!\nBut why is ｛Chris＊＊｝\nannoyed?)");
            }
        }
    else if (var0 == 2){
        if (Parameter_GetCh1Param(5, 130) < 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_08F", 0);
            Voice_PlayVoice("O0305000_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It was bad luck that we came second,\nbut the other group was too into it\nso let's be happy with this result▼");
            Message_Who(0);
            Message_MsgDisp("主人公", "(It was really unfortunate, we were\nso close...)");
            }
        else if (Parameter_GetCh1Param(5, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_BlinkStart(5, 3, (#1));
            Character_Chara_GS2(5, "M5_08F", 0);
            Voice_PlayVoice("O0305000_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "We came first in terms of how\nlovey-dovey we were, though.\nWe were so close～.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(We were so close...\nThat was bad luck!)");
            }
        else {
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(5, 3, (#1));
            Character_Chara_GS2(5, "M5_08F", 0);
            Voice_PlayVoice("O0305000_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I'm glad that instead of coming\nfirst, I got to spend more time with\nyou▼");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm... that was unfortunate...\nDoes ｛Chris＊＊｝ prefer\ncoming second?)");
            }
        }
    else if (var0 == 3){
        if (Parameter_GetCh1Param(5, 130) < 3){
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(5, "M5_08F", 0);
            Voice_PlayVoice("O0305000_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "In terms of attracting attention, we\ncame first.\nEven though we were perfectly in\nsync, we came third.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm～...\nMaybe I didn't try hard enough...)");
            }
        else if (Parameter_GetCh1Param(5, 130) == 3){
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(5, "M5_08F", 0);
            Voice_PlayVoice("O0305000_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I wanted to be with you a little\nlonger, so I ran slowly...\nSorry...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm～....\nMaybe I didn't try hard enough...)");
            }
        else {
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(5, "M5_08F", 0);
            Voice_PlayVoice("O0305000_E00800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "If we came last, I would've been\nable to be with you a little\nlonger...\nThat's bad luck...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Third place, huh...\nThat's unfortunate.\nBut is ｛Chris＊＊｝ annoyed\nfor another reason?)");
            }
        }
    else {
        if (Parameter_GetCh1Param(5, 130) < 3){
            Character_ChFace(0, 0, 9);
            Character_Chara_GS2(5, "M5_08F", 0);
            Voice_PlayVoice("O0305000_E00900", 5, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I wasted your cuteness power...\nSorry, ｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh, that was no good...)");
            }
        else if (Parameter_GetCh1Param(5, 130) == 3){
            Character_ChFace(0, 0, 9);
            Character_Chara_GS2(5, "M5_08F", 0);
            Voice_PlayVoice("O0305000_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I was so close to you that my heart\nwas beating faster and I had no\nstrength...\nSorry...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh, that was no good...)");
            }
        else {
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(5, 2, (#1));
            Character_Chara_GS2(5, "M5_08F", 0);
            Voice_PlayVoice("O0305000_E01100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I'm glad that I ran with you until\nthe very end▼ Actually, I didn't\nwanna reach the finish line.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I wonder why ｛Chris＊＊｝\nlooks happy even though we came\nlast?)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(5, 86, 1);
    }
