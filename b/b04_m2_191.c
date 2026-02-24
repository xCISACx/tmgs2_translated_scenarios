section "b04_m2_191"{
    int var0 = Date_GetDateOption(2, 61);
    Effect_OpenParticle(1);
    if (var0 == 0){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 0, 11);
        Background_Bg_GS2("BG_TR110_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402191_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "The entire ground is covered with\nfallen leaves...");
        Message_MsgSel("The leaves look like a baby's hand.", "The red and yellow trees are beautiful.", "Ah! There's a bagworm!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(2, 2, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0402191_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nIf you think about it, isn't that\nactually disgusting?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(2, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402191_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah.\nIt's nice that I can feel that it's\nfall.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402191_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Where? ...\nEh, it's been a long time since I\nlast saw one.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Background_Bg_GS2("BG_TR110_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402191_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "The sky is high... Hm?\nThat cloud formation is called a\n\"mackerel sky\", right?");
        Message_MsgSel("No, it's a saury sky.", "Speaking of which, I'm hungry.", "You're quite knowledgeable.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(2, 2, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402191_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Saury sky...\nYou're kidding, right?\nI've never heard of that before.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 1);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402191_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Fall, with the sky clear and blue,\nhuh.\nAnd you eat too much.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0402191_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nAre you trying to trick me or\nsomething with that way of talking?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Background_Bg_GS2("BG_TR110_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402191_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "As expected, the mountain breeze is\ncool....\nAre you cold?");
        Message_MsgSel("Should we run so we'll warm up?", "Yeah, my skin is a little cold.", "I'll be fine as long as I'm with you!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_BlinkStart(2, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402191_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "We didn't jog on the way here,\nright?\nIf you're cold, then should we head\nback down?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_BlinkStart(2, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402191_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Do you want to go for a walk down\nthe mountain?\nIt's gotten a little cold for me,\ntoo...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(2, 3, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0402191_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Am I a wind breaker?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 1);
                Voice_PlayVoice("B0402191_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Liar. You've been shivering.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ugh...");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 0);
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("B0402191_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "*Sigh*...\nIt's not something to hide.");
                Message_Who(0);
                Message_MsgDisp("主人公", "But we were enjoying the pretty fall\nleaves, leaving because it's cold is\njust...");
                Character_BlinkStart(2, 0, (#1));
                Voice_PlayVoice("B0402191_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Idiot.\nWhat will you do if you caught a\ncold?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ugh... Right.");
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0402191_B01500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "This won't be the last time the\nleaves turn, right?\n... We'll just come here again.");
                Character_ChFace(0, 2, 5);
                Voice_PlayVoice("B0402191_B01600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "And we can still enjoy the scenery\nif we take another route down.\nDon't you think so?");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Shiba＊＊｝...");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0402191_B01700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "It's about time we went back down.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Yeah!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Thank you,\n｛Shiba＊＊｝...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Effect_CloseParticle();
    }
