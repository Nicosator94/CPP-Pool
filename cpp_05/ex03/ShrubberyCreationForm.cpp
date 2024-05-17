/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 14:26:43 by niromano          #+#    #+#             */
/*   Updated: 2024/05/16 18:07:30 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 25, 5), _target(target) {}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy), _target(copy._target) {}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &shrubberycreationform) {
	this->_execGrade = shrubberycreationform._execGrade;
	this->_signGrade = shrubberycreationform._signGrade;
	this->_sign = shrubberycreationform._sign;
	return *this;
}
ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	if (this->_sign == false)
		throw AFormNotSigned();
	if (executor.getGrade() <= this->getExecGrade()) {
		this->createTree();
	}
	else
		throw GradeTooLowException();
}

void ShrubberyCreationForm::createTree() const {
	std::ofstream output_file((this->_target + "_shrubbery").c_str());
	if (!output_file.is_open())
		throw FileCreationFailed();
	output_file << "              _{\\ _{\\{\\/}/}/}__" << std::endl;
	output_file << "             {/{/\\}{/{/\\}(\\}{/\\} _" << std::endl;
	output_file << "            {/{/\\}{/{/\\}(_)\\}{/{/\\}  _" << std::endl;
	output_file << "         {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}" << std::endl;
	output_file << "        {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}" << std::endl;
	output_file << "       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}" << std::endl;
	output_file << "      {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}" << std::endl;
	output_file << "      _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}" << std::endl;
	output_file << "     {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}" << std::endl;
	output_file << "      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}" << std::endl;
	output_file << "       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)" << std::endl;
	output_file << "      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}" << std::endl;
	output_file << "       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}" << std::endl;
	output_file << "         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}" << std::endl;
	output_file << "          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)" << std::endl;
	output_file << "            {/{/{\\{\\/}{/{\\{\\{\\(_)/}" << std::endl;
	output_file << "             {/{\\{\\{\\/}/}{\\{\\\\}/}" << std::endl;
	output_file << "              {){/ {\\/}{\\/} \\}\\}" << std::endl;
	output_file << "                   \\.-'.-/" << std::endl;
	output_file << "          __...--- |'-.-'| --...__" << std::endl;
	output_file << "   _...--\"   .-'   |'-.-'|  ' -.  \"\"--..__" << std::endl;
	output_file << " -\"    ' .  . '    |.'-._| '  . .  '   " << std::endl;
	output_file << " .  '-  '    .--'  | '-.'|    .  '  . '" << std::endl;
	output_file << "          ' ..     |'-_.-|" << std::endl;
	output_file << "  .  '  .       _.-|-._ -|-._  .  '  ." << std::endl;
	output_file << "              .'   |'- .-|   '." << std::endl;
	output_file << "  ..-'   ' .  '.   `-._.--   .'  '  - ." << std::endl;
	output_file << "   .-' '        '-._______.-'     '  ." << std::endl;
}

const char* ShrubberyCreationForm::FileCreationFailed::what() const throw() {return "Can't open the outfile";}