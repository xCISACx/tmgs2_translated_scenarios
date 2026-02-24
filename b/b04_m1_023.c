section "b04_m1_023"{
    int var0 = Date_GetDateOption(2, 2);
    if (var0 == 0){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 0, 11);
        Background_Bg_GS2("BG_WF230_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401023_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Oh, amazing...\nThe view in front of us looks misty.");
        Message_MsgSel("I want to bungee jump from there!", "It looks like a scene from a movie.", "The bridge is shining beautifully.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401023_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You're really adventurous, aren't\nyou...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("B0401023_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Hmm～... It's missing something.\nIt's average.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 3);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401023_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah.\nThey may have built this place\nthinking about the view.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Background_Bg_GS2("BG_WF230_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401023_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I wonder how much weight that bridge\ncan support?");
        Message_MsgSel("There's information written over there!", "Perhaps it could support a monster!", "It could hold you, ｛Saeki＊＊｝!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 11);
            Character_BlinkStart(1, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401023_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Oh, let's go check it out.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(1, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401023_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "A monster? I wonder...\nYeah, it looks like it could.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Character_BlinkStart(1, 2, (#1), 1);
            Voice_PlayVoice("B0401023_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Am I a monster or something...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 5);
        Background_Bg_GS2("BG_WF230_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401023_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Going home after doing just this is\nkinda a waste, right?");
        Message_MsgSel("I want to stay here forever.", "Should we skip home then?", "But I have to go home soon.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401023_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Alright, let's stay and look a\nlittle longer!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(1, 3, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401023_A01000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You can, okay? I'll walk home.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(1, 3, (#1));
                Voice_PlayVoice("B0401023_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Don't worry.\nEither way, this place closes in the\nevening.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(1, 3, (#1));
                Voice_PlayVoice("B0401023_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Right...\nChildren are so inconvenient.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Children?");
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0401023_A01300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Us.\nWe can't even be where we want, when\nwe want.");
                Character_ChFace(0, 0, 6);
                Character_ChFace(0, 4, 0);
                Character_BlinkStart(1, 3, (#1));
                Voice_PlayVoice("B0401023_A01400", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Even if we're with the person we\nlike, we only worry about going\nhome...\nI want to be an adult already.");
                Message_Who(0);
                Message_MsgDisp("主人公", "\"The person we like\"...");
                Character_ChFace(0, 0, 11);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0401023_A01500", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "!! No, I was speaking in general...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(My heart was throbbing...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
