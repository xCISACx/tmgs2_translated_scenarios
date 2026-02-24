section "b04_m1_202"{
    int var0 = Date_GetDateOption(2, 16);
    if (var0 == 0){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_WF540_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401202_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "The look of the beach during winter\nis completely different from how it\nlooks in summer...");
        Message_MsgSel("I feel a little sentimental.", "I wonder if there are any sea urchins...", "That lovey-dovey couple looks warm.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401202_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah. Because you remember summer...\nI also like the beach during winter.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401202_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "There won't be any at the undersides\nof rocks, but near the cove-- No,\nyou can't catch them.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 2, (#1), 1);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0401202_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Don't go staring at them...\nWhat a shameless person.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 5);
        Background_Bg_GS2("BG_WF540_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401202_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I feel...\nthat the sound of the wind at the\nbeach in winter is awfully loud...");
        Message_MsgSel("It's a little scary.", "I feel like someone is calling me...", "It will make us fly!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401202_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You're right.\nWhen there aren't any people, you\nmight feel the intensity of nature,\nmore so than in summer.");
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
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401202_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "A phantom ship...\nSurely, at around this time,\nsomewhere on top of a ship there's--\nWah, I get scared talking about it.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("B0401202_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Alright, go fly!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_WF540_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401202_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "When I was a kid, I couldn't swim at\nthe beach during winter, so I often\nplayed by myself at the shore.");
        Message_MsgSel("So you had no friends.", "You've liked the beach since then?", "You must have been cute back then...");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(1, 2, (#1), 1);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0401202_A00900", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Shut up.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0401202_A01000", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Yeah.\nBack then, all I did was fight with\nthe neighbourhood kids.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Is that so...\nYou're quite different now, aren't\nyou?");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(1, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0401202_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Yeah.\nThinking about it now, I was the one\nwho generally started the fights.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, I can kind of understand that.");
                Character_BlinkStart(1, 0, (#1));
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0401202_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Well, because I was so\nuncooperative...\nI would always be alone, looking out\nat the ocean like this.");
                Message_Who(0);
                Message_MsgDisp("主人公", "I see...");
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0401202_A01300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "But I'm not alone anymore.\nI have a person by my side who will\nlisten to such boring stories like\nthis.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah... I'm listening.");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0401202_A01400", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "That makes me feel glad...\nI feel like I will be able to like\nmy own self.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Saeki＊＊｝...)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401202_A01500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Maybe. Right...\nHey, let's play the pole-pulling\ngame!\nI'm confident that I won't lose.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401202_A01600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "\"Back then\", what do you mean by\n\"back then\"...?\nIt's \"you're still cute\".");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
