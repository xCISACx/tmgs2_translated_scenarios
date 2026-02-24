section "r03_g2_000"{
    if (Parameter_GetCh1Param(11, 513) != 1){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(11, "G2_12F", 0);
        Voice_PlayVoice("", #1, "R0311000_K00000");
        Message_Who(11);
        Message_MsgDisp("Onoda", "Are you enjoying the party?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Onoda＊＊｝.");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("R0311000_K00100", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "I thought I was alone when I was not\nable to find a friend of mine.\nIt's a good thing I found you!");
        if (Parameter_ChkPlayer(17) == 1){
            Character_BlinkStart(11, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("R0311000_K00200", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "That is a wonderful dress.\nI am somewhat envious of you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Really? Thank you.");
            Character_ChFace(0, 2, 2);
            Voice_PlayVoice("R0311000_K00300", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "I want to wear it, too...\nBut I do not think it would suit me.\nTherefore, I think it's alright.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I was praised by\n｛Onoda＊＊｝!)");
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("R0311000_K00400", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "I am going to go fetch a drink.\nSee you soon.");
            Character_Chara_GS2(11, "NON");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Voice_PlayVoice("R0311000_K00500", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "I am going to go fetch a drink.\nSee you soon.");
            Character_Chara_GS2(11, "NON");
            }
        }
    else {
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(11, "G2_12F", 0);
        Voice_PlayVoice("", #1, "R0311000_K00601");
        Message_Who(11);
        Message_MsgDisp("Onoda", "... ｛主人公｝. You came.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah...\nYou came too, ｛Onoda＊＊｝.");
        Character_ChFace(0, 0, 8);
        Character_BlinkStart(11, 3, (#1));
        Voice_PlayVoice("R0311000_K00700", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "I came to relax.\nJust because it is a party, does not\nmean I am in high spirits like you\nare!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(She looked quite happy even though\nshe said that...)");
        if (Parameter_ChkPlayer(17) == 1){
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(11, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("R0311000_K00800", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "Those clothes...\nIt is a party, but be that as it\nmay, do you mind dressing a little\nmore like a student?");
            Message_Who(0);
            Message_MsgDisp("主人公", ".................");
            Character_Chara_GS2(11, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(T-This is very awkward...)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Character_BlinkStart(11, 3, (#1));
            Voice_PlayVoice("R0311000_K00900", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "Well then, excuse me.");
            Character_Chara_GS2(11, "NON");
            }
        }
    Parameter_AddCh1Param(11, 86, 1);
    }
